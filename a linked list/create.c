#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
         int data;
         struct Node *next;
}Node;
Node *insertion(Node *ptr1) {
     Node *head1=(Node*)malloc(sizeof(Node));
    printf("enter new data:");
    scanf("%d",&head1->data);
    head1->next=ptr1;
    return head1;
}
void display(Node *ptr) {
    while(ptr!=NULL) { 
    printf("%d-->",ptr->data);
    ptr=ptr->next;
    }
    printf("\n");
}
 
 int main() {
    Node *head=(Node*)malloc(sizeof(Node));
    Node *one=(Node*)malloc(sizeof(Node));
    Node *two=(Node*)malloc(sizeof(Node));
    head->data=1;
    head->next=one;
    one->data=2;
    one->next=two;
    two->data=3;
    two->next=NULL;
    display(head);
    head=insertion(head);
    display(head);
    
 }