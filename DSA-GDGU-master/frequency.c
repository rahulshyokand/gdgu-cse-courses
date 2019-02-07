//Write a program to pass a character array in a function and function should commute the
//total numbers of occurrences of a particular character in the character array.

#include <stdio.h>
        /******declaring function******/
 void occurrences();
//globally declare variable char array[]
char array[100];
int main()
  {
    printf("Enter the string (will be stored in an array):-->");
//takes user input in the argument and occurrences function called
    occurrences(gets(array));

return 0;
  }

    /*****function defination*****/
      void occurrences(char array[100])
         {
           int i;
            int count=0;
            char value;
            // User interface
            printf("Enter the character to be searched:--> \n");
            scanf("%c",&value); //char to be searched is stored
               /************ Logic *************/
  //loop runs until '\0' which is null that comes as the user finshes input and presses enter
            for(i=0 ; array[i]!='\0' ;i++ )
            {
                  if(array[i]==value) //comparing value with elements of array
                  {
                    //increamenting count when array encounters the searched variable
                    count++;/
                  }
               }
                   /*******Output computation******/
                  if(count>0)
                  {
                    printf("%s \n above string has %d occurrence/s of %c character\n",array,count,value);
                  }
                  if(count==0)
                  {
                    printf("%c character not found in given string\n",value);
                  }
         } //occurrence() function ends
