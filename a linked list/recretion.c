#include<stdio.h>
#include<stdlib.h>
#include"D:\\c programing\\a linked list\\traversal.h"
 typedef int integer;
  struct Node {
          int data;
         struct  Node *next;                                     
};
 void traversal(struct Node *ptr) {
        while(ptr!=NULL) { 
      printf("%d----> ",ptr->data);
      ptr=ptr->next; //head =head->next -> two->data and two->next
      }
}

int main() {
   integer ghar =45;
   struct Node *head=(struct Node*)malloc(sizeof(struct Node));
   struct Node *one=(struct Node *)malloc(sizeof(struct Node));
   struct Node *two=(struct Node*)malloc(sizeof(struct Node));
   struct Node *three=(struct Node*)malloc(sizeof(struct Node));
   one->data=1;
   one->next=two;

   two->data=2;
   two->next=three;

   three->data=3;
   three->next=NULL;
   head=one;
//    printf("%d",*head->next->next);
    traversal(head);
    printf("\n");
    display();
}