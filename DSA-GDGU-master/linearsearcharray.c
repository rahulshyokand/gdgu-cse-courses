// Write a C- Program to perform linear search on n elements in an array .
#include <stdio.h>
int main(){
 int element, i, number,array[100],location=0; //initalized required variables
   printf ("Enter the number of inputs you will give: ");
   scanf("%d",&element);
   printf("Now enter %d numbers:\n",element);
for(i=0;i<=element-1;i++){

   scanf("%d",&array[i]);
 }
 printf("Enter number You wish to search: "); //user giving the search number
 scanf("%d",&number);
 
/****************logic starts here**************/
for(i=0;i<=element;i++){
  if(number==array[i])
  {
    location=i+1; //saving location of number if found in search
    printf("\n %d number Found at %d place.",number,location);
  }
}
if(location==0) //location does not get any value when not found in array
{
   printf("Not found in the given array\n" );
}
return 0;
}
