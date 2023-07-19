abstract class GPS{  
   abstract void path();
}  

class SmartPhone extends GPS{
    void path(){
        System.out.println("Finding path...");
    } 
    void call(){
        System.out.println("calling...");
    } 
}
class TestAbstract {   
    public static void main(String args[]){  
        SmartPhone obj = new SmartPhone();  
       // GPS obj = new SmartPhone();  
       // Smartphone obj = new GPS(); 

        obj.path();  
        obj.call();
    }  
}  