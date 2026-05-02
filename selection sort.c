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
void ss(struct node* head){
    struct node* min_node;
    struct node* i;     struct node* j;
    for (i = head; i!= NULL && i -> next != NULL; i= i -> next){
        min_node = i;
        for(j= i -> next; j!= NULL; j = j->next ){
            if (j -> data < min_node -> data){
                min_node =j;
            }
        }
        if(min_node!= i){
            int temp= i -> data;
            i -> data = min_node -> data;
            min_node -> data = temp;
        }
    }
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
    ss(head);
    printf("\nafter sorting:\n");
    print(head);
    return 0;
}