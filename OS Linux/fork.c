#include<stdio.h>
#include<sys/types.h>
#define MAX_LENGTH 1
void childProcess();
void parentProcess();
void main(){
pid_t fork_id;
int child_pid , parent_pid;
fork_id=fork();
if(fork_id==0){
printf("__________________________\n");
childProcess();
printf("Process id %d\n",getpid());
printf("Parent process id %d\n",getppid());
}else{
printf("__________________________\n");
parentProcess();
printf("Process id %d\n",getpid());
printf("Parent process id %d\n",getppid());
}
// new fork
//fork();
//printf("Hello Fork\n");
}
void childProcess(){
int i=0;
for(i=0;i<MAX_LENGTH;i++){
printf("This is Child Process\n");
}
}
void parentProcess(){
int i=0;
for(i=0;i<MAX_LENGTH;i++){
printf("This is Parent Process\n");
}
}
