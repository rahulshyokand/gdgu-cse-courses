/**
 *Create an abstract class Shape which has a field PI=3.14 as final and it has an
 *abstract method Volume. Make two subclasses Cone and Sphere from this class
 *and then print their volume.
 *
 * @author Rahul Shyokand
 * @version 1.0
 */

abstract class Shape
    {
       float pi=3.14f;
       /* volume() is abstract because it is not defined only declared
        * thus the class shape is called abstract. */
       abstract void volume();
}
//sub class Cone extends abstract Shape Class
class Cone extends Shape
{
  int radius=3;
  int height= 3;
 /*abstract function  volume() is defined */
  void volume()
 {
  float volume=pi*radius*radius*(height/3);
  System.out.println("Volume of Cone is "+ volume);
 }
} //cone class ends
/*  Sphere class extend Abstract Shape class */
class Sphere extends Shape
{
   int radius=5 ;
  //abstract function volume() is no defined
  void volume()
  {
       /* Formula for volume of a Sphere */
      float volume=(4/3)*pi*radius*radius*radius;
      System.out.println("Volume of Sphere is "+ volume);
  }
} //Sphere class ends
class Volume
{
 public static void main(String arg[])
 {
          /* Objects for accessing functions given i class*/
          Cone c = new Cone();
          Sphere s= new Sphere();
          //c object access the volume from Cone sub class
          c.volume();
          // s object access the volume from Sphere sub class
          s.volume();
 }
}
