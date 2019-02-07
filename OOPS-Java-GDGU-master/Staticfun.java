/*
 * Write a Static function in java that prints the sum of two numbers.
 */
//package Staticfun;
import java.util.Scanner ; //scanner function imported
/**
 *
 * @RahulShyokand
 */
public class Staticfun {

    //sum function Static
    static  int sum(){
       int num1,num2,sum=0;
       System.out.println("Enter the first number ");

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
       System.out.println("This Java code has a Static Function to add 2 numbers  ");
     //Static sum Function called in main
       sum(); //control comes to function


    }
}
