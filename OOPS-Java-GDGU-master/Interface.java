package question10;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//10.WAP in java in which a class inherits two interfaces.
/**
 *
 * @author Rahul Shyokand
 */

interface A
{
    int a=10;
    void display();
    
}

class B implements A
{
    public void display()
       {
         System.out.println("value of a is "+a);
       }
}



public class Interface
{
    public static void main(String args[])
    {       
        B b = new B();
         b.display();
    
    }

}