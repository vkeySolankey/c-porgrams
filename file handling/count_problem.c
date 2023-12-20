#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main() {
    int noc=0,nol=0,nob=0,not=0;
    FILE *fptr=fopen("first.txt","r");
    if(fptr==NULL) {
        printf("file cannot be open!");
         exit(0);
    }
    while(1) {
      char  ch = fgetc(fptr);
          if(ch==EOF)  break;
        noc++;
        if(ch=='\n') nol++;
         if(ch==' ') nob++;
         if(ch=='\t') not++;

    }
    system("color C");
    fclose(fptr);
    printf("no. of character:%d\n",noc);
    printf("no. of blanks space :%d\n",nob);
    printf("no. of tabs :%d\n",not);
    printf("no. of line :%d\n",nol);
    

}