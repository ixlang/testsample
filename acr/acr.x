//xlang 
package System{
	public class out{
		public static int println(String text){
			return _system_.consoleWrite(text + "\n");
		}
		public static int print(String text){
			return _system_.consoleWrite(text);
		}
	};
};


using { System; };


class XServlet : HttpServlet{
	public XServlet(){
		/** 
		@super 调用基类构造
		@XServlet.FLAG_LOGERROR 将错误打印到页面, 
		@url "/action/*" 正则表达式, 匹配的url请求将被此servlet接管.
		*/
		super(XServlet.FLAG_LOGERROR, "/api/*");
    }
        
	void doGet(HttpServletRequest request, HttpServletResponse response)override{

		//获取参数
		String [] args = request.getArgs("name");
        
		response.print("<html><head><meta charset=\"utf-8\" /></head><body>");

        if (args != nilptr){
			// 设置跨域
			/*response.addHeader("Access-Control-Allow-Origin", "*");
			response.addHeader("Access-Control-Allow-Headers", "X-Requested-With,Content-Type,Accept");
			response.addHeader("Access-Control-Allow-Methods", "HEAD,GET,POST,PUT,DELETE,OPTIONS");*/
			response.print("<b style=\"font-size:40px;\">Hello " + args[0] + "!</b>"); 
            response.print(" <br/>Welcome to xlang Webserver"); 
        }else{
			response.print("<b style=\"font-size:40px;\">Welcome to xlang Webserver!</b>"); 
        }
        response.print("</body></html>");
        
    }
    
	void doPost(HttpServletRequest request, HttpServletResponse response)override{
        String [] keys = request.getParamKeys();
        if (keys.length > 0){
        
            String PACKAGE_NAME = request.getParam("PACKAGE_NAME");
            String APP_VERSION_CODE = request.getParam("APP_VERSION_CODE");
            String ANDROID_VERSION = request.getParam("ANDROID_VERSION");
            
            if (PACKAGE_NAME != nilptr && APP_VERSION_CODE != nilptr && ANDROID_VERSION != nilptr){
                String crashfile = _system_.getAppDirectory().appendPath("crash").appendPath(PACKAGE_NAME + APP_VERSION_CODE + ANDROID_VERSION + Math.random() + ".log");
                while (_system_.fileExists(crashfile)){
                    crashfile = _system_.getAppDirectory().appendPath("crash").appendPath(PACKAGE_NAME + APP_VERSION_CODE + ANDROID_VERSION + Math.random() + ".log");
                }
                long hfile = _system_.openFile(crashfile,"w");
                if (hfile != 0){
                    for (int i = 0; i < keys.length; i++){
                        String content =  keys[i] + ":";
                        String [] vals = request.getParams(keys[i]);
                        for (int x = 0; x < vals.length; x++){
                            content = content + vals[x];
                        }
                        content = content + "\n";
                        byte [] data = content.getBytes();
                        _system_.writeFile(hfile,data,0,data.length);
                    }
                    _system_.closeFile(hfile);
                }
            }
        }
    }
    
};


int main(String [] args){
	/** #################################################################################*/
    /** 创建web站点*/
    Website wb = new Website();
    
    /** 设置站点的静态文件目录为工作目录下的wwwroot文件夹*/
    wb.setRootDirectory(_system_.getWorkDirector().appendPath("wwwroot"));
    
    /** 设置站点的临时目录为temp, 用于网站缓存上传的数据流
		注意:处理了onPostStream的servlet中不会保存临时文件，将回调onPostStream
	*/
    wb.setTempDirectory("temp");
    
    /** 开启设置静态文件缓存， 单个文件大小上限为1M， 整个网站缓存上限为100M*/
    wb.configCacher(true,1024*1024,100*1024*1024);
    
    /** 注册一个servlet处理动态事务*/
    wb.registryServlet(new XServlet()); 
    
    /** 设置站点的默认首页， 多个用分号分割*/
    wb.addDefaultPage("index.html");
    
    String crashdir = _system_.getAppDirectory().appendPath("crash");
    
    _system_.mkdir((crashdir));
    /** #################################################################################*/
    /** 创建http服务器*/
	HttpServer server = new HttpServer();
    
    /** 设置服务器的线程池大小为 4个*/
    server.setThreadPoolSize(4);
    
    /** 将站点添加到服务器中,参数1为IP或者域名,多个用分号分割*/
    server.addWebsite("*;127.0.0.1;localhost", wb);
    
    /** 开启服务器, 模式为默认模式，可选为POLL EPOLL SELECT， 端口8889*/
    if (server.startServer(HttpServer.DEFAULT_MODEL,8889)){

		/** #################################################################################*/
		System.out.println("start server success!\nopen URL with Webbrowser:\nhttp://localhost:8889/\nhttp://localhost:8889/api/?name=xlanguser\nhttp://localhost:8889/api/");
	    
		Thread.sleep(-1);
	}else{
		/** #################################################################################*/
		System.out.println("start server filed! please check port(8889) occupancy!");
		Thread.sleep(3000);
	}

	return 0;
}
