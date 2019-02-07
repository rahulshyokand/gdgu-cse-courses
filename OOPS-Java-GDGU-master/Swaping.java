/** WAP in java to swap two integers without using third variable. The swapping
 * must be done in a different method in a different class.
 */
/**
 *
 * @author Rahul Shyokand
 */
import java.util.Scanner;

public class Swaping
  {

      static int Swap()
          {

            int num1 , num2;

            System.out.println("Enter the first number");
            //Object of scanner class
            Scanner scan = new Scanner(System.in);
            //storing the int datatype values in num1
            num1= scan.nextInt() ;

            System.out.println("Enter the second number");
            //storing int in num2
            num2= scan.nextInt();

            // logic
            num1=num1+num2;
            num2= num1-num2;
            num1=num1-num2;

            //printing data
            System.out.println("First num now is " + num1);
            System.out.println("Second number now is " + num2);

            return 0;

          }

    public static void main(String arg[])
         {
            Swap(); //Swap Function called
         }
  }
