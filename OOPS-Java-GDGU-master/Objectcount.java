/*
 * WAP in java that keeps track of all the objects created from a particular class
 * and prints the no of objects created, whenever an object is created.
 */
/**
 *
 * @author Rahul Shyokand
 */

public class Objectcount
   {

      public static void main (String arg[])
         {
          //making objects of class Countob
          Countob counter= new Countob();
          Countob adder = new Countob();
          Countob java = new Countob();
          //Fucntion called from Countob Class using . (access specifier)
          System.out.println(Countob.count + " Objects are made in the main");
         }
    }


class Countob
    {
         static int count;
         Countob()
           {
            count++; //increments when new object is made
           }
    }
