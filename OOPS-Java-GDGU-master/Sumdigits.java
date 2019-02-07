//WAP in java to find the sum of the digits of a number

import java.util.Scanner;  //scanner class imported from util for user input

class Sumdigits
 {
       //function which is used to calculate the sum of digits of enterd number
       //int number is parameter where user's input is passed in function
        static int sumFind(int number)
     {
           int remain=0,sum=0;
           /****** Logic to Add all the digits of a number ******/
           while (number!=0)
              {
                   remain = number%10;
                   number = number/10;
                   sum= sum + remain;
               }
           return sum;
      }
        public static void main(String args[])
               {
                  // variable which has the System.in
                  Scanner userinput = new Scanner(System.in);
                  System.out.println("Enter a number: ");
                  int number = userinput.nextInt(); //Waits until user gives input
                  //final result is shown
                 System.out.println("Sum of Digits of "  +number+" is "+sumFind(number));
               }
}
