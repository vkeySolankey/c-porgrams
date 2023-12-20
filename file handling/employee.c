#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() {
   FILE *fptr;
   char another ='y';
  typedef struct employee {
     char name[40];
     char last_name[40];
     int age;
     float base_salary;

}employee;
      employee e;
     
      fptr=fopen("New_record.txt","w");
      if(fptr==NULL) {
        puts("file can't open!");
        exit(0);
      }
      
      while(another=='y') {
               printf("\nenter first name,last name ,age,base salare:");
               scanf("%s %s %d %f",&e.name,&e.last_name,&e.age,&e.base_salary);
               fprintf(fptr,"%s %s %d %f \n",e.name,e.last_name,e.age,e.base_salary);
             printf("add another record Y/N");
             fflush(stdin);

             another=getche();

      }
      fclose(fptr);
   

}