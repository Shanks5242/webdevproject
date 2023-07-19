final class Byke{
  void running(){
    System.out.println("Byke running safely");
  } 
}  
  
class TestFinal2{  
  void runn(){
      System.out.println("running safely with 100kmph");
    }    
  public static void main(String args[]){  
    TestFinal2 honda= new TestFinal2();  
    honda.runn();  
    
    Byke b = new Byke();
    b.running();
  }  
}