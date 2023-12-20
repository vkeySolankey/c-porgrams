#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    FILE *fptr=fopen("clearscreen.c","r");
    if(fptr==NULL) {
        printf("file cannot be open!");
        fclose(fptr);
        return 0;
    }
    while(1) {
        char ch=fgetc(fptr);
        if(ch==EOF) 
        break;
        printf("%c",ch);
    }
    return 0;

}