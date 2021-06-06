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


int main(String [] args){
    StringBuffer sb = new StringBuffer(1024000);
    for (int i = 0; i < 100000; i++){
        sb += "c";
    }
    String hs = sb.toString();
	System.out.println("hello world");

	_system_.sleep(3000);

	return 0;
}
