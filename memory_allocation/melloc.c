#include<stdio.h>
#include<stdlib.h>
int main() {

    int *ptr= (int*)malloc(5*sizeof(int));
    int *ptr2=ptr;
    for(int i=1; i<=5; i++) {
        *ptr=i;
        ptr++;
    }
    for(int i=1; i<=5; i++) {
        printf("%d\n",*ptr2);
        ptr2++;
    }
}