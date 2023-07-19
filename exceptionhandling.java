import java.util.*;
public class exceptionhandling {
    public static void main(String[] args)
    {
    Scanner sc= new Scanner(System.in)  ;
        int d;
        int x;
        d=sc.nextInt();
        x=sc.nextInt();
        try {
            int result = divideNumbers(d, x);
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: " + e.getMessage());
        }
       
        
    }


    public static int divideNumbers(int dividend, int divisor) throws ArithmeticException {
        if (divisor == 0) {
            throw new ArithmeticException("Division by zero is not allowed.");
        }
        else{
         int w= dividend / divisor ;
         return w;
        }
    }
    }
