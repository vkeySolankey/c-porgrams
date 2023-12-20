#include<stdio.h>
#include<stdlib.h>
struct node {
       int data;
       struct node* next;
};
void traversal(struct node *ptr){
         while(ptr!=NULL) {
            printf("%d ",ptr->data);
            ptr=ptr->next;
         }
}
struct node* insertatfirst(struct node *head,int data)  { 
       struct node* ptr=(struct node*)malloc(sizeof(struct node));
       ptr->next=head;
       ptr->data=data;
       return ptr;
}
int main() {
 struct node *head=(struct node*)malloc(sizeof(struct node));
 head->data=1;
 head->next=NULL;
 head= insertatfirst(head,2);
 traversal(head);
  head= insertion(head ,3);
//  printf("\n");
//  traversal(head);







}