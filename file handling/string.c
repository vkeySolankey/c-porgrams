#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
int main() {
    FILE *fptr=fopen("new_2.txt","w");
    if(fptr==NULL) {
        puts("file cannot be open!");
        exit(0);
    }
    char s[90];
    puts("enter a few lines of txt\n");
    while(strlen(gets(s))) {
       fputs(s,fptr);
       fputs("\n",fptr);
    }
    fclose(fptr);
} 