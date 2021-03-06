#include<stdio.h>
struct process {
    int pid;
    int btime;
    int wtime;
    int ttime;
}
p[10];
// sorting function declaration
void sortProcessByBurstTime(struct process p[], int n);

void main() {
    int i, j, k, n, ttur, twat;
    float awat, atur;
   
    printf("---------SJF CPU Scheduling--------\n");
   
    printf("Enter Number of Processes: ");
    scanf("%d", & n);
    for (i = 0; i < n; i++) {
        printf("Enter Burst Time for Process P%d (in ms): ", (i + 1));
        scanf("%d", & p[i].btime);
        p[i].pid = i + 1;
    }
    
    
    // calling sorting function before any action on Processes
   sortProcessByBurstTime(p, n);
    

    // calculating wait time & turnaround time of each process
    p[0].wtime = 0;
    for (i = 0; i < n; i++) {
        // assiging wait time
        p[i + 1].wtime = p[i].wtime + p[i].btime;
        // assigning turnaroud time of process
        p[i].ttime = p[i].wtime + p[i].btime;
    }

    // finding total (wait & turnaround)
    ttur = twat = 0;
    for (i = 0; i < n; i++) {
        ttur += p[i].ttime;
        twat += p[i].wtime;
    }
    // avg wait time + avg turn around time
    // using data type casting to float
    awat = (float) twat / n;
    atur = (float) ttur / n;

    /* Displaying Data in Tabular Format */
    printf("\nSJF CPU Scheduling\n\n");
    // setting top line
    for (i = 0; i < 28; i++)
        printf("-");
    /* adding table headers */
    printf("\nProcess B-Time T-Time W-Time\n");
    for (i = 0; i < 28; i++)
        printf("-");
    /* bottom line drawn */

    /*Adding Data in Table*/
    for (i = 0; i < n; i++)
        printf("\nP%d\t%4d\t%4d\t%4d", p[i].pid, p[i].btime, p[i].ttime, p[i].wtime);
    printf("\n");
    for (i = 0; i < 28; i++)
        printf("-");
    /* Bottom Line */

    /* GANTT Chart Printing*/
    printf("\n\nGANTT CHART\n");
    printf("-");
    for (i = 0; i < (p[n - 1].ttime + 2 * n); i++)
        printf("-");
    printf("\n");
    printf("|");
    for (i = 0; i < n; i++) {
        k = p[i].btime / 2;
        for (j = 0; j < k; j++)
            printf(" ");
        printf("P%d", p[i].pid);
        for (j = k + 1; j < p[i].btime; j++)
            printf(" ");
        printf("|");
    }
    printf("\n");
    for (i = 0; i < (p[n - 1].ttime + 2 * n); i++)
        printf("-");
    printf("\n");
    printf("0");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p[i].btime; j++)
            printf(" ");
        printf("%2d", p[i].ttime);
    }
    printf("\n\nAverage Waiting time %5.2fms", awat);
    printf("\n\nAverage Turnaround time %5.2fms\n", atur);
}

   
 // sorting function defination outside main
    void sortProcessByBurstTime(struct process p[], int n)
{
    int x, y;
    struct process temp;
    for(x=0; x<n-1; x++) {
        for(y=0; y<n-1-x; y++) {
        	// swaping after comparing current element with previous
            if(p[y].btime > p[y+1].btime) {
                temp = p[y];
                p[y] = p[y+1];
                p[y+1] = temp;
            }
        }
    }
}

