/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 * Author:  DBMS
 * Created: Sep 26, 2018
 */
/*

Create a class student that stores student roll_no and its member function as
getrollno() and putrollno() to input the rollno from the user and to print the roll
no. From this , derive a class test in which there are marks of two subjects and
its tasks are to get the marks from the user and to display these marks. Define
an interface sports in which there is marks of sports and function to display the
marks. To implement multiple inheritance, derive a class results from test that
implements interface sports
*/
import java.util.Scanner;
class student 
      {
             public static int studentrollno;
              public static void getrollno()
                               {
                                 //gets input from user 
                                 System.out.println("Enter rollno");
                                 Scanner get= new Scanner(System.in);
                                 
                                 studentrollno= get.nextInt();
                                
                                 }
              public static void  putrollno()
                               {
                                //displays output on screen
                                   System.out.println("Studentrollno is "+ studentrollno);
                                   
                              }     

       }

class test extends student 

    {

       static  int  marks_1;
       static int marks_2;
         public static void getmarks()
         { 
         System.out.println("Enter Marks of First Subject");
          Scanner getmarks = new Scanner(System.in);
          
          marks_1=getmarks.nextInt();
          
          
          System.out.println("Enter Marks of Second Subject");
          
          marks_2=getmarks.nextInt();
          
                 
         }
         
         
         
          public static void showmarks()
          {
              System.out.println("Marks in First Subject= "+marks_1 );
              System.out.println("Marks in Second Subject= "+marks_2 );
          }
       
    }
interface sports
    {
        static int sportsmarks=69;
        abstract void  showsportsmarks();
     }
public class result extends test implements sports
{
         
         //sports marks display 
         //abstract function defined 
          public void showsportsmarks()
         {
             System.out.println("Sports marks are "+ sportsmarks);
         }
              public static void main(String args[])
              {             
                  /* funcntion are inherited from otehr classes with public access */
                         getrollno();
                         putrollno();
                         getmarks();
                         showmarks();
                         //showsportsmarks is non-static fucntion
                      result r =new result();                    
                         r.showsportsmarks();
              }
}