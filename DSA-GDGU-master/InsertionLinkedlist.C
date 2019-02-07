//Write a program for dynamic implementation of Insertion
//on linkedlist.

#include <stdio.h>

//#include<conio.h>
//uncomment conio.h if running on Turbo C/ C++
//declaring variable out of main to use them in the functions
struct linked
      {
	  int value;
	  struct linked *next;
      };
typedef struct linked Link;
Link *head= NULL ;
Link *dis ;
Link *tmp ;
Link *iter ;
Link *q ;
int main()
{
   int choice ;
   clrscr();
    //User Interface
    printf("Insertion of data using in Linkedlist");
    printf("\n1.Insertion on First \n 2.Insert at Last  \n 3.Insert at position");

    printf("\n 4.Display List \n 5.Exit");

do{
      {
	printf("\nEnter the Choice:");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:
	      insertion_first();
		break;
	case 2:
	      insertion_end();
		break;
	case 3:
	      insertion_pos();
		break;

	case 4:
		display();
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

//Display Instance of List

int display()
{
if(head==NULL)
{
printf("List is Empty");
}
else
    {
      dis=head;
      printf("The Data in list is: \n");
      while(dis != NULL )
	   {
	    printf("%d->",dis->value);
	    //now dis points to next of next node
	    dis=dis->next;
	   }
    } //else ends
    return 0;
}

// functions linked list
int  insertion_first()
      {
	 // tmp = head;

//temp is used so that the value at head is presereved
tmp=(Link *)malloc(sizeof(Link));

printf("Enter the value ");

scanf("%d",&(tmp->value));
//inserting at the next node
tmp->next = NULL;

if(head==NULL)
{
   head -> next = NULL ;
   head = tmp ;

}
else
{
      tmp -> next = head;
      head = tmp ;
}

printf("%d is inserted on first location \n",(tmp->value));

printf("%u is address of entered value\n ",&(tmp->value));


return 0;

 }

int  insertion_pos()
      {
       //variables for this function
    int pos,i,number;
    if(head == NULL)
    {
	printf("Empty List found!");
	return 0;
    }

    tmp = (Link *)malloc(sizeof(Link));

    printf("Enter the value :");
    scanf("%d",&number);
    printf("Enter position to which you want to insert:");
    scanf("%d",&pos);
    // vaule has been assigned number
    tmp -> value = number;

    q=head;


    for(i=1;i<pos-1;i++)
    {
	if(q->next==NULL)
	{
	    printf("Less Elements!!");
	    return 0;
	}

	q=q->next;
    }
    //linked value = number to node before desired
    tmp->next=q->next;
     //the tmp address is assigned to q-> next tmp is now after entered value
    q->next=tmp;
    return 0;
}



int insertion_end()
{

//temp is used so that the value at head is presereved
tmp=(Link *)malloc(sizeof(Link));

printf("Enter the value ");

scanf("%d",&(tmp->value));
//inserting at the next node
tmp->next = NULL;

if(head==NULL)
{
   head=tmp;
}
else
{
     iter = head;
     while(iter->next != NULL)
     {
      iter = iter -> next ;
     }
     iter->next = tmp; //linking tmp data to last node of Linkerd List
}

printf("%d is the value\n",(tmp->value));

printf("%u is address of entered value\n",&(tmp->value));


return 0;

 }
