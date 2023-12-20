#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *fptr, *fptr1;
    int ch;
    fptr=fopen("student_record.exe","rb");
    if(fptr==NULL) {
        puts("cannot open source file!");
            exit(0);
    }
    fptr1=fopen("new1.exe","wb");
    if(fptr1==NULL) {
        puts("cannot open target file");
        fclose(fptr1);
        exit(0);
    }
    while(1) {
        ch=fgetc(fptr);
        if(ch==EOF) 
        break;
        else 
        fputc(ch,fptr1);

    }
    fclose(fptr);
    fclose(fptr1);

}