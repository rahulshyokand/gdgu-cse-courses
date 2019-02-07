/*
 *
 * @author DBMS
 */
/*
14.WAP in java to handle the following condition using a single try block

int arr[]={3,0};
int i=arr[0]/arr[1];

catch all the possible type of exceptions from the above statement.
*/
public class exception 
{   
  
   public static void main(String arg[])
   {  
       int i;
     int arr[]={3,0};
    try 
    { 
        //Exception as Int divide by 0 is Not defiend 
          i= arr[0]/arr[1];
         System.out.println(i);
    }
    
    catch(Exception e)
    
    {
        System.out.println("Ahhh! Looks liek You are dividing by zero ");
    }
}
}