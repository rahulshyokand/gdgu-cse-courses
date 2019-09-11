#include<stdio.h>

struct process
{
 int btime;
 int wtime;
 int ttime;
 int pid;
 int priority;
}p[0];

void main()
{
int i,j,ttur,twat,n,k;
float awat,atur,temp;

printf("Enter the Number of Processes\t");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("Enter the Burst time for Process P%d : ",i+1);
scanf("%d",&p[i].btime);
printf("Enter the Priority for Process P%d : ",i+1);
scanf("%d",&p[i].priority);
p[i].pid=i+1;
}


for (i = 0; i < n; ++i) 
{
for (j = i + 1; j < n; ++j)
{
 if (p[i].priority > p[j].priority) 

    {
      temp =  p[i].priority;
      p[i].priority = p[j].priority;
      p[j].priority = temp;

      temp =  p[i].pid;
      p[i].pid = p[j].pid;
      p[j].pid = temp;

   } 
  }
}

p[0].wtime=0;
for(i=0;i<n;i++)
{
p[i+1].wtime=p[i].btime+p[i].wtime;
p[i].ttime=p[i].wtime+p[i].btime;
}

ttur=twat=0;
for(i=0;i<n;i++)
{
ttur+=p[i].ttime;
twat+=p[i].wtime;
}
awat=(float)twat/n;
atur=(float)ttur/n;

printf("\n--Priority Scheduling--\n\n");
for(i=0;i<38;i++)
printf("-");

printf("\nProcess B-Time W-Time T-Time Priority\n");
for(i=0;i<38;i++)
printf("-");

for(i=0;i<n;i++)
printf("\nP%d\t%4d\t%3d\t%2d\t%2d",p[i].pid,p[i].btime,p[i].wtime,p[i].ttime,p[i].priority);
printf("\n");

for(i=0;i<38;i++)
printf("-");

printf("\n\nGANNT CHART\n");
printf("-");

for(i=0;i<(p[n-1].ttime+2*n);i++)
printf("-");
printf("\n");
printf("|");

for(i=0;i<n;i++)
{
k=p[i].btime/2;
for(j=0;j<k;j++)
printf(" ");
printf("P%d",p[i].pid);
for(j=k+1;j<p[i].btime;j++)
printf(" ");
printf("|");
}
printf("\n");

for(i=0;i<(p[n-1].ttime+2*n);i++)
printf("-");
printf("\n");
printf("0");

for(i=0;i<n;i++)
{
for(j=0;j<p[i].btime;j++)
printf(" ");
printf("%2d",p[i].ttime);
}
printf("\n\n Average Waiting Time: %5.2fms",awat);
printf("\n\n Average Turnaround Time: %5.2fms\n",atur);
}


