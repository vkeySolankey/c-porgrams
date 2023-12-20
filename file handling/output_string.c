
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char ch[50];
    FILE *fptr=fopen("new_2.txt","r");
    if(fptr==NULL) {
        puts("file cannot be open!");
        exit(0);
    }
    
    while(fgets(ch,4,fptr)!=NULL) {
        printf("%s",ch);
    }
    fclose(fptr);
} 