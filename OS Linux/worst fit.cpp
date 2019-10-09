#include <stdio.h>
struct process
{ int size;
int flag;
int holeid;
} process_var[10];

struct hole
{ int hid;
int size;
int actual;
} hole_var[10];


void bsort(struct hole bh[], int n)
{ struct hole
temp; int i,j;
for(i=0; i<n-1; i++)
{ for(j=i+1; j<n; j++)
{ if(bh[i].size < bh[j].size)
{ temp = bh[i];
bh[i] = bh[j];
bh[j] = temp;
}
}
}
}


void main()
{ int i, numprocesses, numholes, j;
printf("Enter the number of Holes :");
scanf("%d", &numholes);
for(i=0; i<numholes; i++)
{ printf("Enter size for hole H%d :",i);
scanf("%d", &hole_var[i].size);
hole_var[i].actual = hole_var[i].size;
hole_var[i].hid = i;
}
printf("\nEnter number of process : ");
scanf("%d",&numprocesses);
for(i=0;i<numprocesses;i++)
{ printf("enter the size of process P%d :",i);
scanf("%d", &process_var[i].size);
process_var[i].flag = 0;
}
for(i=0; i<numprocesses; i++)
{ 
// calling  sort function
bsort(hole_var, numholes);
for(j=0; j<numholes; j++)
{ if(process_var[i].flag != 1)
{ if(process_var[i].size <= hole_var[j].size)


{ process_var[i].flag = 1;
process_var[i].holeid = hole_var[j].hid;
hole_var[j].size -= process_var[i].size;
}
}
}
}
printf("\n\tBest fit\n");
printf("\nProcess\tPSize\tHole");
for(i=0; i<numprocesses; i++)
{ if(process_var[i].flag != 1)

printf("\nP%d\t%d\tNot allocated", i,process_var[i].size);
else printf("\nP%d\t%d\tH%d", i, process_var[i].size, process_var[i].holeid);
}
printf("\n\nHole\tActual\tAvailable");
for(i=0; i<numholes ;i++)
printf("\nH%d\t%d\t%d", hole_var[i].hid,hole_var[i].actual, hole_var[i].size);
printf("\n");
}
