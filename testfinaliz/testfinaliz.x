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

class SObject{
    int a = 8;
};

class FObject {
    int nid = 0;
    public FObject(int id){
        nid = id;
    }
    public SObject ss;
    public FObject next;
    public FObject prev;
    
    void finalize(){
        if (next != nilptr){
            fucker.prev = next;
        }
        System.out.println("FObject rel:" + nid);
    }
    
};

FObject fucker;

void test(){
    fucker = new FObject(3);
    fucker.prev = new FObject(4);
    fucker.prev.prev = fucker;
    FObject f = new FObject(1);
    f.next = new FObject(2);
    f.next.ss = new SObject();
    f.next.prev = f;
    f = nilptr;
}

int main(String [] args){
    test();
    _system_.gc();
	System.out.println("hello world");
	return 0;
}
