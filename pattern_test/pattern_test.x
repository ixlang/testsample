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

	Pattern p = new Pattern("$", Pattern.MULTILINE);
    p.match("dsadsadsa\nfdsfsd\ndsfsfd\r\ndfs", Pattern.NOTEMPTY);

	_system_.sleep(3000);

	return 0;
}
