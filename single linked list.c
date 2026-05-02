#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
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
    struct node* temp = head;
    while (temp!= NULL){
        printf("%d -> ", temp -> data);
        temp = temp->next;
    }
    return 0;
}