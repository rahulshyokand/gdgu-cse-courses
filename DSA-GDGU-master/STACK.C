//Write a program for implementation of various(Push,Pop) Stack Operations.
#include<stdio.h>
int choose,stack[100],size,i=0,top,value; //initalized variables
int main(){
int top=-1;
//functions declaration
void pop();
void push();
void display();
//User Interface
printf("Enter the size of your array: ");
scanf("%d",&size);
printf("Select a case\n");
printf("Press 1 For Push\n");
printf("2 for POP\n");
printf("3 for Display\n");
printf("4 for exit\n");
//do while loop for running the program unitl user wants to exit;
do {
printf("Enter your choice: ");
scanf("%d",&choose);
//switch case to navigate to functions
 switch(choose)        {
case 1:
        {
           push();
           break;
         }
case 2:
         {
           pop();
           break;
         }
case 3:
       {
           display();
           break;
        }
case 4:
       {
           break;
        }
default : {
            printf("Please Enter a Valid Choice!\n");
           }
                         }
}
while(choose!=4); //loop runs until user enters 4
return 0;
    }
/*********************** Funtions Definations  **********************/
void push(){
if(top>=size){
           printf("Stack Overflow\n");
             }
else { printf("Enter Value to be inserted: ");
scanf("%d",&value);
top++;
stack[top]=value;
}
}
void pop(){
  if(top<=-1)  {
    printf("Stack UnderFlow");
               }
  else {
         printf("\n Popped %d from your stack",stack[top]);
         top--;
        }
}
 void display() {
  if(top>0)
  {
    printf("Elements in Stack\n");
    for(i=top;i>0;i--)
       printf("%d\n",stack[i]);
  }
  else { printf("The Stack is empty.\n");}
}
