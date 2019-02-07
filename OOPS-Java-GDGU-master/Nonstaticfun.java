/*
 * Write a non-static function in java that prints the sum of two numbers.
 */
//package Nonstaticfun;
import java.util.Scanner ;
/**
 *
 * @RahulShyokand
 */
public class Nonstaticfun {
    //sum function non-static
     int sum()
     {
       int num1,num2,sum=0;
       System.out.println("Enter the first number ");
         //user input
       Scanner s1 =new Scanner(System.in);
       num1=s1.nextInt();
       System.out.println("Enter the second number");

       num2=s1.nextInt();

       sum=num1+num2;
       System.out.println("Sum is "+sum);

    return sum;  //function sum(); returns the value of sum
   }

    public static void main(String arg[])
    {
       System.out.println("This Java code has a Non-Static Function to add 2 numbers  ");

       //for nonstatic function call make an object and call the function
       Nonstaticfun obj= new Nonstaticfun();
       obj.sum(); //sum function called with reference of obj(object)

    }
}
