#include <stdlib.h>
#define MAX 6
int stack[MAX], top = -1;
int isfull(){
    return top == MAX - 1;
}
int isempty(){
    return top == - 1;
}
void push(int value){
    if (isfull())
    printf("overflow\n");
    else{
        top++;
        stack[top]=value;
        printf("pushed %d into the stacks\n", value);    }      }
int i;
void pop(){
    if (isempty())
    printf("underflow\n");
    else{
        printf("poped elementfrom top:\n");
        for(i=0;i>=0;i--){
            printf("%d\n", stack[top]);
            top--;      }       }       }
int main() {
    int top = -1;
    push (10);
    push (90);
    push (5);
    pop();
    pop();
    push (100);
    pop();
    return 0;       }