/*

 */
//package packagename;
import java.util.Scanner;
/**
 *
 * @author Rahul Shyokand
 */

public class airthmaticexception extends ageexception {
    
    public static void main(String ags[])
    {
        int age;
        
        System.out.println("Every Eligible Person should vote ");
        try 
        {
        System.out.print("Please Enter Your AGE: ");
        Scanner get = new Scanner(System.in);
        age= get.nextInt();
        if(age>=18)
        {
            System.out.println("You can Vote Please Proceed to EVM ");
        }
        
        else {
                 throw new TEST();
                 
             }
        
    }
        
        catch(ageexception e)
                {
                 System.out.println("EXCEPTION OCCOURED PLEASE WAIT UNTIL YOU GET 18 ");
                }
        
    }
    
}
class ageexception extends Exception {
    
    static void TEST(){
        System.out.println("EXCEPTION ::: PLEASE WAIT UNTIL YOU GET 18");
                
    }
}




