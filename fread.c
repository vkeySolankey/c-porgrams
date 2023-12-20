#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    FILE *fp;
    char another='y';
    typedef struct  emp {
        char n[40];
        int age;

    }emp;
    emp e;
    fp=fopen("EMP.txt","wb");
    if(fp==NULL) {
        puts("cannot open");
        exit(0);
    }
    while(another=='y') {
        printf("\nEnter n,age :");
        scanf("%s %d",&e.n,&e.age);
        fwrite(&e,sizeof(e),1,fp);
             puts("\nadd another:y/n");
             fflush(stdin);
             another=getch();

    }

    fclose(fp);

}