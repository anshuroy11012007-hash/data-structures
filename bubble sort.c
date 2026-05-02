// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void print(struct node* head){
    struct node* temp = head;
    while (temp!= NULL){
        printf("%d -> ", temp -> data);
        temp = temp->next;
    }
}
void bs(struct node* head){
    int swapped;
   struct node* ptr1;
   struct node* lptr = NULL;
   do {
       swapped = 0;
       ptr1 = head;
       while (ptr1 -> next != lptr){
           if (ptr1 -> data > ptr1 -> next -> data){
               int temp = ptr1 -> data;
               ptr1 -> data = ptr1 -> next -> data;
               ptr1 -> next -> data = temp;
               swapped = 1;
           }
           ptr1 = ptr1 -> next;
       }
       lptr = ptr1;
   }
   while (swapped);
}
int main(){
    struct node* one = (struct node*)malloc(sizeof(struct node));
    struct node* two  = (struct node*)malloc(sizeof(struct node));
    struct node* three= (struct node*)malloc(sizeof(struct node));
    struct node* four = (struct node*)malloc(sizeof(struct node));
    struct node* head = one;
    one -> data = 10;
    one -> next = two;
    two -> data = 901;
    two -> next = three;
    three -> data = 40;
    three -> next = four;
    four -> data = 20;
    four -> next = NULL;
    printf("before sorting :\n");
    print(head);
    bs(head);
    printf("\nafter sorting:\n");
    print(head);
    return 0;
}