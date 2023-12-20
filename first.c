#include<stdio.h>
int main() {
    printf("it's proper work!");
    // int player=2;
    // player=(player%2) ? 1 : 2;
    // printf("%d", player);
    // printf("\n\t");
    printf("enter a and b:");
    char a,b;
    scanf("%c",&a);
    int c;
    printf("enter c");
    scanf("%d",c);
    printf("enter b:");
    scanf("%c",&b);
    printf("a and b is %c and %c",a,b);
    fflush(stdin);
}