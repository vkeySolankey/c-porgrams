#include<stdio.h>
void s(int n) {
  
    if(n<=5){ 
                 goto less;
                 
                  }
      else goto great; 
      less:
      printf("%d is less than five\n",n );
      return;
      great:
      printf("%d is greater thean five\n",n);
      return;          
    
}
int main() {
    s(6);
}