/* Write a program to maintain the records of 50 Students with the following details(name,
   age,roll no,branch,DOB ) and print thr details of only those students whose branch is
    computer science     */
#include<stdio.h>
#include<string.h> //used for strcmp(string compare function)
      struct Student //structure initialized
      {
             int rollno;
             char name[25];
             int age;
             char branch[50];
             char dob[25];
      };

      int main()
      {
             int i , size;
         printf("Enter the number of students you want to enter: ");
         scanf("%d",&size); //The number of students ser wats to enter

          struct Student Array[size]; //array assigned to Student Structure
             for(i=0;i<size;i++) //takes input from user for student data
             {

              printf("\nEnter details of student %d",i+1);

                   Array[i].rollno=i+1; //Counting Roll number

                   printf("\n\tEnter Student Name : ");
                   scanf("%s",&Array[i].name); //name input in array

                   printf("\n\tEnter Age : ");
                   scanf("%d",&Array[i].age); //age input

                   printf("\n\tEnter branch : ");
                   scanf("%s",&Array[i].branch); //branch input

                   printf("\n\t Enter DOB: ");
                   scanf("%s",Array[i].dob); //DOB input


             }

             printf("\nStudents who are from CSE \n");
             printf("\nRollno\tName\tAge\tBranch\tDOB"); //Formating the output

      for(i=0;i<size;i++)
        {
           if((strcmp(Array[i].branch,"cse")==0) || (strcmp(Array[i].branch,"cs")==0) || (strcmp(Array[i].branch,"CSE")==0) || (strcmp(Array[i].branch,"CS")==0 )  ) //checks if branch is equal to "cse"
          {
  printf("\n%d\t%s\t%d\t%s\t%s\n",Array[i].rollno,Array[i].name,Array[i].age,Array[i].branch,Array[i].dob);
          }
       }
}
