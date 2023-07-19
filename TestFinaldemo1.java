class TestFinaldemo1 {
    final int THRESHOLD = 25;
	static final int CAPACITY;
	final int MINIMUM;
	static{
		CAPACITY = 25;
		//MINIMUM = 11;
	}
	public TestFinaldemo1(){
		MINIMUM = -1;
	}
    public TestFinaldemo1(int i){
		MINIMUM = -2;
	}
	void display(){
        System.out.println("Threshold = "+ THRESHOLD);
        System.out.println("Capacity = "+ CAPACITY);
        System.out.println("Minimum = "+ MINIMUM);
    }	
    public static void main(String args[]){
        TestFinaldemo1 t1 = new TestFinaldemo1();
        t1.display();
    }
}