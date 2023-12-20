#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main() {
     FILE *fptr;
    typedef struct employee {
     char name[40];
     char last_name[40];
     int age;
     float base_salary;

}employee;
 employee e;

 fptr=fopen("New_record.txt","r");
 if(fptr==NULL) {
 puts("cannot open file!");
 exit(0);
  }
  while(fscanf(fptr,"%s %s %d %f",&e.name,&e.last_name,&e.age,&e.base_salary)!=EOF) { 
    printf("\n%s %s %d %f ",e.name,e.last_name,e.age,e.base_salary);

 }
// char name[]="vkey solanki";
// int salary=20004;
// int age =20;
// fprintf(fptr,"%s %d %d ",name,salary,age);
   fclose(fptr);
 




}