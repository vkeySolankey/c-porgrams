#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main() {
    FILE *fptr=fopen("first.txt","r");
    if(fptr==NULL){
        printf("File can't copy!");
        exit(0);
    }
    FILE *fptr1=fopen("new.txt","w");
    if(fptr1==NULL) {
        printf("file cannot copy!");
        exit(0);
    }
    while(1) {
        char ch=fgetc(fptr);
         if(ch==EOF){
            break;
         }
         fputc(ch,fptr1);
         printf("%c",ch);
    }
    fclose(fptr);
    fclose(fptr1);
}