//Write a program for static implementation of various operations on linear queue.
#include <stdio.h>
//declaring variable out of main to use them in the functions
int queue[100],front=-1 , i,rear=-1, size=0,value=0,choice,item=0;
int main()
{
  //User Input Queue Size
    printf("Enter the Size of Queue\n");
    scanf("%d",&size);
    //User Interface
    printf("Implenment Queue using Array");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");

do{
      {
        printf("\nEnter the Choice:");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
                enqueue();
                break;
        case 2:
                dequeue();
                break;
        case 3:
                display();
                break;
        case 4:
                break;
        default:
                printf("Please Choose Valid Option");
        }
    }
  }
        while(choice!=4); //loop stops when the input is 4 and thus the program quits
         printf("Bye"); //Executes After user enters 4
return 0;
}
//Display Instance Of the Queue

int display()
          {
              printf("Queue Contents\n");
              for(i=0;i<size;i++)
                {
                  printf("%d\n",queue[i]); //Queue Output
                 }
return 0;

}

//Deleting the front value from the queue
int dequeue()
      {
        //intially queue is empty with front and rear equal to -1
        if(front==-1 )
          {
           printf("Queue Underflow / Queue is Already Empty\n");
          }

      //Deletes the front value and assigns NULL
       else
        {
          //the value that is deleted is front value
          printf("%d Dequeued / Deleted from Queue\n",queue[front]);
        queue[front]=NULL; //assigns null value to empty location
        front++;
        }

       }

int enqueue()
{
  //when the size gets equal to rear then the function does not take the input
  // and returns the else statement saying Queue Overflow
  if(size-1!=rear){
printf("Enter the value to insert in the Queue\n");
scanf("%d",&value );
  if(front==-1 && rear==-1)
       {
          front=front+1;
          rear=rear+1;
          queue[rear]=value;
       }

  else if(rear<size-1)
       {
         rear++;
         ///assinging the value from user to queue rear
          queue[rear]=value;
       } //else terminated
} //if statement terminated

  else //executes if the condition on line 78 does to satisfy
        {
         printf("Queue Overflow\n" );
        }

return 0;
}
