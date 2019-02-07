#include <stdio.h>

int main(){
    int array[3][2], i,j,sum=0;
    printf("Please Enter Elements of 2D Array\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=1;j++){
            
            scanf("%d",&array[i][j]);

        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=1;j++){
            sum=sum+array[i][j];
        }
    }
      printf("%d is the sum of entered elemnts of given array\n",sum);

        return 0;
    }
