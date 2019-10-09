
#include <stdio.h>
#include <stdlib.h>
int Item = 0, overflow = 0, mutex = 1, underflow = 10;
int wait(int count)
{ return (--count); }
int signal(int count)
{ return(++count); }

void producer()
{ mutex = wait(mutex);
overflow = signal(overflow);
underflow = wait(underflow);
Item++;
printf("\nProducer:\t Item %d\n", Item);
mutex = signal(mutex);
}

void consumer()
{ mutex = wait(mutex);
overflow = wait(overflow);
underflow = signal(underflow);
printf("\nConsumer:\t Item %d\n", Item);
Item--;
mutex = signal(mutex);
}
int main()
{ int choice;
printf("\n1.Producer\t");
printf("2. Consumer\t");
printf("3. Quit\t");
while(1)
{ printf("\nEnter your choice:\t");
scanf("%d", &choice);
switch(choice)
{ case 1: if((mutex == 1) && (underflow != 0))
producer();
else
printf("Buffer Overflow\n");
break;
case 2: if((mutex == 1) && (overflow != 0))

consumer();
else
printf("Buffer Underflow\n");
break;
case 3: exit(0);
break;
}
}
return 0;
}
