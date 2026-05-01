#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct { int item [MAX] ; int top;} stacks;

void init_s ( stacks *s ) { s -> top = -1; }

int isempty ( stacks *s ) { return s -> top == -1; }

int isfull ( stacks *s ) { return s -> top == MAX -1; }

void push ( stacks *s, int x ) {
    if (s -> top == MAX -1)  return;
    s -> item [++s -> top] = x;     }

int pop ( stacks *s )  {
    if (isempty (s))  return -1;   
    return s -> item [s -> top--];     }

typedef struct { stacks s1,s2; } queue;

void init_q (queue *q) { 
    init_s (&q -> s1);      init_s (&q -> s2);     }

void enqueue (queue *q, int x) {
    push (&q -> s1, x);     }

int dequeue (queue *q) {
    while (!isempty (&q -> s1)) {
         push (&q -> s2, pop (&q -> s1));}
    return pop (&q -> s2);     }
    
int main()
{    queue q;
     init_q (&q);
     enqueue (&q, 10);      enqueue (&q, 20);      enqueue (&q, 30);
     printf ("Dequeued element: %d\n", dequeue (&q));
     printf ("Dequeued element: %d\n", dequeue (&q));
     printf ("Dequeued element: %d\n", dequeue (&q));
     return 0;       }