#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
int main() {
    FILE *fptr=fopen("first.txt","r+");
    if(fptr==NULL) {
        puts("file cannot be open!");
        exit(0);
    }
    char ch[50]="finnaly i modified this file using my new coding!";
    while(1) {
        char ch=fgetc(fptr);
        if(ch==EOF-1) {
            fputs(ch,fptr);
            break;
        }
    }
    fclose(fptr);
} 