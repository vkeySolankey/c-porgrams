#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() { 
    FILE *fp;
    typedef struct emp {
     char n[40];
     int age;
    }emp;
    emp e;
    fp=fopen("EMP.dat","rb");
    if(fp==NULL) {
        puts("file cannot");
        exit(0);
    }
    while(fread(&e,sizeof(e),1,fp)==1) 
    printf("\n %s %d ",e.n,e.age);
    fclose(fp);

}