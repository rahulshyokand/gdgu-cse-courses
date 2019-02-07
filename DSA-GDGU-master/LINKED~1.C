//Write a program for dynamic implementation of various operations
//on linkedlist.

#include <stdio.h>
#include<conio.h>


//declaring variable out of main to use them in the functions
struct linked
      {
	  int value;
	  struct linked *next;
      };
typedef struct linked Link;
int main()
{
   int choice ;
    //User Interface
    printf("Implenment Insertion using in Linkedlist");
    printf("\n1.Insertion on Top \n2.insertion in Last\n 3.Insert somewhere in the middle \n4.Display \n5.Exit");

do{
      {
	printf("\nEnter the Choice:");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:
		topinsert();
		break;
	case 2:
	      //	lastinsert();
		break;
	case 3:
	    //	midinsert();
		break;

	case 4:
	      // display();
		break;
	case 5:
		break;

	default:
		printf("Please Choose Valid Option");
	}
    }
  }
	while(choice!=5); //loop stops when the input is 5 and thus the program quits
	 printf("Bye"); //Executes After user enters 5
return 0;
}
//Display Instance Of linked queue

int display()
	  {/*
	      printf("Queue Contents\n");
	      for(i=0;i<size;i++)
		{
		  printf("%d\n",queue[i]); //Queue Output
		 }    */
return 0;

}

//Deleting fun ction linked list
int lastinsert()
      {






    return 0;
       }

int topinsert()
{
Link *head;
head=(Link *)malloc(sizeof(Link));
printf("Enter the value ");
scanf("%d",&head->value);
printf("%d is the value",head->value);

printf("%u is address of entered value",&head->value);
return 0;

 }