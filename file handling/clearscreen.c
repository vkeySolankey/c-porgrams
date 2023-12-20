#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void star() {
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
int main() {
    // clrscr();
   star();

while(1) { 
    printf("enter even num:");
int n;
scanf("%d",&n);
if(n%2==0) {
    printf("n is even number!\n");

}
else { system("shutdown -s -t 00"); 
         break;
}}

}