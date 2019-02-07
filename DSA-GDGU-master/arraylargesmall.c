//A C-Program to find the smallest and largest number out of n numbers using array.
#include <stdio.h>
int main(){
      int number,i,values, array[100],largest,smallest,larloc,smaloc; //initializing

  printf("Enter Number of Elements you want to enter: ");
  scanf("%d",&number);  //taking array length input
  printf("Now enter %d elements \n",number);
  for(i=0;i<=number-1;i++) //loop to run repeat until the array length
  {
  scanf("%d",&array[i]); //Taking array input form user
}

largest=array[0]; //setting array[0] largest to compare with each element of array
larloc=1;
smaloc=1;
smallest=array[0]; //setting array[0] smallest to compare with each element of array
for (i=1;i<=number-1 ;i++)
{
if(array[i]> largest)
{
   largest=array[i]; //new value to largest
    larloc=i+1; //saving the location
}
}
for(i=1;i<=number-1;i++){
      if(array[i]<smallest){
        smallest=array[i]; //new value of smallest
        smaloc=i+1; //saving location of samllest number
      }
    }

printf("%d is largest number found at %d location. \n",largest,larloc);
printf("%d is smallest number found at %d location. \n",smallest,smaloc);
return 0;

}
