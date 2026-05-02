// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define MAX 6
int queue[MAX], front = -1, rear = -1;
int isempty(){
    return front == -1 || front > rear;
}
int isfull(){
    return rear == MAX -1;
}
void enqueue(int value){
    if (isfull())
    printf("overflow\n");
    else{
        if(front == -1)
        front =0;
        rear++;
        queue[rear]=value;
    }
}
int i=0;
void dequeue(){
    if (isempty())
    printf("underflow\n");
    else{
      for (i=0;i<queue[MAX];i--){
          printf("front element is %d", queue[front]);
          front ++;
      }  
    }
}
void display(){
    for (i=0;i<=rear;i++){
        printf(" %d ",queue[i]);
    }
}
int main(){
    enqueue(10);
    enqueue(99);
    enqueue(50);
    enqueue(12);
    enqueue(37);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}