//WAP in java to accepts two numbers (int) as command line arguments and print their sum.
public class Cmdlinesum
{
                   //main class started
                    public static void main(String[] arg)
                    {
                      int a,b,sum;
                      //converting string/char input to Integer
                      //to be passed like this (java Cmdlinesum a b)

                      a=Integer.parseInt(arg[0]);
                      b=Integer.parseInt(arg[1]);

                      sum=a+b; //math logic
                      //output of the result
                      System.out.println("Sum of " + a + " and " + b + " is " +sum);
                    }
}
