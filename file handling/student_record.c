#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
typedef struct Student {
            char name[30];
            char last_name[40];
            char roll[15];
}Student; 
void display() {
    Student s;
       FILE *fptr1=fopen("Student.txt","r");
       if(fptr1==NULL) {
        puts("error!");
        exit(0);
       }
       char f[]="first name";
       char l[]="last name";
       char e[]="Enrollment";
        printf("%-15s %-15s %-15s\n",f,l,e);
       while(fscanf(fptr1,"%s %s %s ",&s.name,&s.last_name,&s.roll)!=EOF) {
       printf(" %-15s %-15s %-15s\n",s.name,s.last_name,s.roll);
             
       }
       fclose(fptr1);
}

void add() {
    Student s;
     FILE *fptr=fopen("Student.txt","a");
     if(fptr==NULL) {
        printf("error!");
        exit(0);
     }
    char another='y';
    while(another=='y' || another=='Y') {
          printf("ente first name,last name, Enrollment number:");
          scanf("\t%s %s %s",&s.name,&s.last_name,&s.roll);
          fprintf(fptr,"%s %s %s\n",s.name,s.last_name,s.roll);
          printf("do you want add another y/n\n");
          fflush(stdin);
          another=getch();

    }
    fclose(fptr);
}
void style() {
    printf("\n\n\n\t\t\t\t\t\t");
   for(int i=0; i<16; i++) {
        printf("\xDB");
        Sleep(60);
   }
char nn[]=" % CREATED BY VKEY SOLANKI % ";
   for(int i=1; i<strlen(nn); i++) {
        printf("%c",nn[i]);
        Sleep(60);
   }
  
   for(int i=1; i<20; i++) {
        printf("\xDB");
        Sleep(60);
   }
    printf("\n");
}

void SetColor(int ForgC)
{
     WORD wColor;
                          //We will need this handle to get the current background attribute
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

                           //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                     //Mask out all but the background attribute, and add in the forgournd color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}



int main() {
 
system("color B");

       SetColor(2);
     style();
 while(1) {
   
  printf("1.add new student\n2.list student\n3.exit\nenter\n");
  char ch=getch();
  switch(ch) { 
     case '1': add(); break;
     case '2': display(); break;
     case '3': exit(0); break;
     default : printf("something is wrong!\n");
  
  
  }
 

 }

return 0;

}