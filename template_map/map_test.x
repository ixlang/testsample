require ("E:\\Developments\\Cadaqs\\caNamespace\\castudio\\xcross\\xlang\\xlang\\common\\system.xcs", 
        "map/rbtree.xcs", 
        "map/camap.xcs")

int main(String [] args){
    _system_.createConsole();
    
	camapex<int ,int> map = new camapex<int ,int>();

	for (int i =0; i < 1000; i ++){
		map.put(i, 0 - i);
	}

	int h = 0;

	camapex<int ,int>._iterator<carbtree<camapitem<int, int> , int>._Node<camapitem<int, int>>> iterator = map.Find(700000);

	try{
		h = iterator.val();
	}catch(Exception e){
		System.out.print("not found\n");
	}

	System.out.print(String.format("map size = %d,found %d fc:%d\n" ,map.size(), map.get(5), h));

	//Native.MessageBoxA(0, String.format("putcompleted size = %d,found %d fc:%d" ,map.size(), map.get(1000), h), "tips", 0);
    Thread.sleep(1000);
	return 0;
}


