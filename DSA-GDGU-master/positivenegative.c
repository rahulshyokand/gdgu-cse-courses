#include<stdio.h>

int main()
{
int number;
printf("\nThis C-Program will show the type(positive,negative,zero) of number you enter\n");
printf("Enter a number: ");
scanf("%d",&number); //user inputs the desired integer
if(number>0) //compared number with zero
printf("%d is positive. \n",number);
if(number<0)
printf("%d is negative. \n",number);
if(number==0) // checked if number  is equal to zero
printf("You entered ZERO. \n");

return 0;
}
