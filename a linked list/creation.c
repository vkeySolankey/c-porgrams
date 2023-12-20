#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr) {
    while(ptr!=NULL) { 
    printf("%d ",ptr->data);
    ptr=ptr->next;
    }
   
}
int main()
{

    struct node *head=(struct node *)malloc(sizeof(struct node));   // first node
    struct node *second; // second node
    struct node *third;  // third node
    // memory allocating in heap
    
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 7;
    head->next = second;
    second->data = 5;
    second->next = third;
    third->data = 3;
    third->next =NULL;
      traversal(head);
     

    return 0;
}