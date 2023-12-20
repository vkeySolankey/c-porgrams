#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    FILE *fptr= fopen("first.txt","w");
    if(fptr==NULL) {
        printf("\nfile connot be created!");
        return 0;
    }
    char name[]="i am the hero of my world";
    int i=0;
    while(i!=strlen(name)) {
        fputc(name[i],fptr);
        i++;
    }
  fclose(fptr);
}