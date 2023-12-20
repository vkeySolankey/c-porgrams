#include<stdio.h>
int factorial_num(int n) {
    if(n==0 || n==1) return 1;
    return n*factorial_num(n-1);
}
int main() {
  
   int n;
         printf("enter number:");
          scanf("%d",&n);
    int ans=      factorial_num(n);
        
    printf("factorial is :%d",ans);      

 
}