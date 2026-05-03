#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node{
    struct node*l;
    int data;
    struct node* r;
};
void bst(struct node* root){
    if (root == NULL) {
        return;
    }
    int swapped;
    if ((root -> l -> data) < (root -> data)){
        swapped = false;
    }
    if(root -> data > root -> r -> data){
            int temp = root -> data;
            root -> data = root -> r -> data;
            root -> r -> data = temp;
            swapped = true;
        }
    if (root -> r -> data > root -> data){
        swapped = false;
    }
    if (root -> l -> data  >  root -> data){
            int temp = root -> l -> data;
            root -> l -> data = root -> r -> data;
            root -> r -> data = temp;
            swapped = true;
        }
    if (swapped == true){
        bst(root);
    }
}
void postOrder(struct node* root) {
    if (root == NULL) {
        return;
    }
    postOrder(root->l);           // Visit Left
    postOrder(root->r);           // Visit Right
    printf("%d ", root->data);
}
int main(){
    struct node* a = (struct node*)malloc(sizeof(struct node));
    struct node* b = (struct node*)malloc(sizeof(struct node));
    struct node* c = (struct node*)malloc(sizeof(struct node));
    struct node* d = (struct node*)malloc(sizeof(struct node));
    struct node* e = (struct node*)malloc(sizeof(struct node));
    struct node* f = (struct node*)malloc(sizeof(struct node));
    struct node* g = (struct node*)malloc(sizeof(struct node));
    struct node* head = a;
    a -> l = b;
    a -> data = 90;
    a -> r = c;
    b -> l = d;
    b -> data = 40;
    b -> r = e;
    c -> l = f;
    c -> data = 70;
    c -> r = g;
    e -> l = NULL;
    e -> data = 10;
    e -> r = NULL;
    f -> l = NULL;
    f -> data = 50;
    f -> r = NULL;
    d -> l = NULL;
    d -> data = 30;
    g -> l = NULL;
    g -> data = 65;
    d -> r = NULL;
    g -> r = NULL;
    printf("Post-order Traversal: ");
    postOrder(head);
    bst(head);
    printf("\npost order traversal of binary search tree: ");
    postOrder(head);
    return 0;
}