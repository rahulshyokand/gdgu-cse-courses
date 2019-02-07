#include <stdio.h>

int main()
{
  int i=0, number,array[100],insertvalue,location;
  printf("How many elements do you need in this array?\n ");
  scanf("%d",&number);
  printf("Now Enter %d  elements in array \n",number);
  for (i=0;i<=number-1; i++)
   {

  scanf("%d",&array[i]);  //array[i] is storing info in all location of the array

}
 printf("What value do you wish to insert in array? \n");
 scanf("%d",&insertvalue);
 printf("At what location do you wish to insert %d\n",insertvalue);
 scanf("%d",&location);


 for (i=number-1; i>=location-1; i--)
 {
   array[i+1]= array[i];

 }
array[location-1]=insertvalue;



printf("Resultant array is\n");

for(i=0;i<=number;i++ )
{
 printf("%d\n",array[i]);

}



  return 0;

}
