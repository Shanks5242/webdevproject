class Bikee{  
   final void run(){
      System.out.println("running");
    } 
   final void run(int i){
      System.out.println("Value of i="+ i);
    }  
}  
     
class TestFinal3 extends Bikee{  
    void runn(){
       System.out.println("running safely with 100kmph");
   }  
     
   public static void main(String args[]){  
        TestFinal3 honda = new TestFinal3();  
        honda.run(7);  
   }  
} 