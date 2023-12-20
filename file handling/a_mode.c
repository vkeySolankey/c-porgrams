#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
int main() {
    FILE *fptr=fopen("first.txt","a");
    if(fptr==NULL) {
        puts("file cannot be open!");
        exit(0);
    }
    char ch[]=" i modifie the file contents words";
    int size=strlen(ch);
    int i=0;
    
         fputs(ch,fptr);
         fclose(fptr);
   
}