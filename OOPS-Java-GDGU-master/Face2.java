/**
 *
 *10.WAP in java in which a class inherits two interfaces.
 */
/**
 *
 * @author Rahul Shyokand
 */

interface addfunction
        {

           public static final int num1=91; //num1 is constant
           //interface variables are by default Public static final
            int num2=10;
            //function declared
            void addfunction();
         }

interface subtractfunction
      {
            //function for subtraction declared
               void subtractfunction();

       }
class calculator implements addfunction,subtractfunction
{
  public void addfunction()
            {
               int sum=num1+num2;
               System.out.println("Sum of 2 constants " +sum);
             }
  public void subtractfunction()
    {
        int num1=89;
        int num2=23;
        System.out.println( (num1-num2) +" is the value after subtraction");
    }
}
public class Face2
{
      public static void main(String args[])
             {   //object of calculator class
                 calculator add = new calculator();
                 calculator sub = new calculator();
                 add.addfunction();
                 sub.subtractfunction();
             }
}
