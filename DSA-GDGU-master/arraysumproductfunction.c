//Write a Function to display the sum and  Product of all integer elements stored in the array.
#include <stdio.h>

int sumfunction(int array[] , int size) // sum of elements in array function defination
  {
     int i, sum=0;
  for(i=0;i<size;i++){
    sum=sum+array[i];  //each element added once in sum=0

}
    return sum; //Returning sum's value  from sumfunction()

}
  int productfunction(int array[] , int size)  // product of elements in array function defination
    {
       int i, product=1;
    for(i=0;i<=size-1;i++){

      product=product*array[i]; //each element array multiplied once in product


    }
      return product; //Returning product's value  from productfunction()
    }
int main(){

     int addition=0, multi=1;
     int i, size, array[100];
     printf("Enter number of Elements You need: ");
     scanf("%d",&size);
     printf("Now Enter %d numbers in array ",size);
     for(i=0;i<=size-1;i++)
     {
       scanf("%d",&array[i]); //array input by user
     }

     addition=sumfunction(array,size); //Stored sumfunction() value in addition
     multi=productfunction(array,size); //stored productfunction() value in multi
    printf("%d is Product of entered array \n",multi);
    printf("%d is Sum of entered array \n",addition);
   return 0;
}
