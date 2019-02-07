//Write a program to perform binary search on n elements in an array.
#include <stdio.h>
int main()
  {

     int size,array[100],location,mid,find ,first,last, i;

     printf("Enter length of numbers you wish to enter");
     scanf("%d",&size);

     printf("enter the numbers in asending order\n");

    for(i=0;i<size;i++)
      {
        scanf("%d",&array[i]);
      }
    printf("\nNow Enter the value to search\n");
    scanf("%d",&find);

         //searching the array of numebrs using the
        //search using optimal and efficent program
        //logic

     first=0; //first num is index
     last= size-1; //last number is at size-1
   //mid value before search
   mid=(size-1)/2;

// Loop runs until value at first is less than value at location last
 while(array[0]<array[size-1])
     {
       //when the mid gets equal to the value to be searched
       //loop breaks after printing the value
        if(array[mid]==find)
     {
       printf(" %d Found at location %d\n",find,mid+1);
       break;
     }
     //comparing the findvalue with the value at mid
        else if(array[mid] > find)
     {
        last = mid-1;
        mid = (last+first)/2; //mid value updated for new values
      }
       else if(array[mid] < find )
          {
                 first=mid+1;
                 mid = ( first + last )/2; //mid value updated after new first
            }
     //when loop does not find the value return not found and break out of loop
      if(first>last)
           {
             printf("Not found in array\n");
             break;
           }
      }

return 0; //main function doesnot return anything
}
