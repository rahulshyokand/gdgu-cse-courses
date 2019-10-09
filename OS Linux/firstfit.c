#include <stdio.h>
struct process
{
int size;
int flag;
int holeid;
} p[10];

struct hole
{
int size;
int actual;
} h[10];

void main()
{
int i, numprocesses, numholes, j;
// get number of holes in array
printf("Enter the number of Holes :"); scanf("%d", &numholes);
// get input on all the holes for holes size
for(i=0; i<numholes; i++)
{
printf("Enter Size for hole H%d :",i); scanf("%d", &h[i].size);
h[i].actual = h[i].size;
}

// get number of processes 
printf("\nEnter Number of process : "); scanf("%d",&numprocesses);
//get input on all the processes for size
for(i=0;i<numprocesses;i++)
{
printf("Enter the Size of Process P%d :",i); scanf("%d", &p[i].size);
p[i].flag = 0;
}

//
for(i=0; i<numprocesses; i++)
{
for(j=0; j<numholes; j++)
{
if(p[i].flag != 1)
{
if(p[i].size <= h[j].size)
{
p[i].flag = 1;
p[i].holeid = j;
h[j].size -= p[i].size;
}
}
}
}
// printing relevent details
printf("----------------");
printf("\nFirst fit\n");
printf("----------------");
printf("\nProcess\tPSize\tHole");
for(i=0; i<numprocesses; i++)
{
if(p[i].flag != 1)
printf("\nP%d\t%d\tNot Allocated", i,p[i].size); 
else
printf("\nP%d\t%d\tH%d", i, p[i].size, p[i].holeid);
}
printf("\n\nHole\tActual\tAvailable");
for(i=0; i<numholes ;i++)
printf("\nH%d\t%d\t%d", i, h[i].actual,h[i].size); printf("\n");
}
