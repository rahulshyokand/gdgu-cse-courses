#include<stdio.h>

// variables Declare and Initializing
int frame_size , frame[10],page[10],page_ref_len , page_fault_counter , available_bool , k ,j ,iter , iter2; 

void main(){
	printf("Enter Size of page :");
	scanf("%d",&page_ref_len);
	printf("\nEnter %d Page Reference Stream Elements: ",page_ref_len);

	for(iter=0 ; iter<page_ref_len ; iter++){
	printf("\nEnter Reference String No. %d ----:",iter+1);
	scanf("%d",&page[iter]);
}
printf("Enter number of frames :"); 
scanf("%d", &frame_size);
// initializing frame data with an empty/null referance
for(iter=0; iter<frame_size; iter++) frame[iter] = NULL;

j = 0;

printf("\nValue");
for(iter=0; iter<=page_ref_len; iter++)
{
printf("\n%4d\t",page[iter]); available_bool = 0;
for(k=0; k<frame_size; k++)
if(frame[k] == page[iter]) available_bool = 1;

if(available_bool == 0)
{
frame[j] = page[j]; 

j = (j+1)%frame_size;

page_fault_counter++;

for(k=0; k<frame_size; k++)
printf("%4d", frame[k]);
}

}
printf("\n\nTotal no. of page faults : %d\n",page_fault_counter);

}
















//#include <stdio.h>
//main()
//{
//int i,j,l,rs[50],frame[10],nf,k,avail,count=0;
//printf("Enter length of ref. string :"); scanf("%d", &l);
//printf("Enter reference string:\n"); for(i=1; i<=l; i++)
//scanf("%d", &rs[i]);
//printf("Enter number of frames :"); scanf("%d", &nf);
//for(i=0; i<nf; i++)
//frame[i] = -1;
//j = 0;
//printf("\nRef. str Page frames");
//for(i=1; i<=l; i++)
//{
//printf("\n%4d\t",rs[i]); avail = 0;
//for(k=0; k<nf; k++)
//if(frame[k] == rs[i])
//avail = 1;
//if(avail == 0)
//{
//frame[j] =
//rs[i]; j = (j+1)% nf; count++;
//for(k=0; k<nf; k++)
//printf("%4d", frame[k]);
//}
//}
//printf("\n\nTotal no. of page faults : %d\n",count);
//}
























