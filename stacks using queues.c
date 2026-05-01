# include <stdio.h>     
# include <stdlib.h>        
# define MAX 10
typedef struct  {
    int items[MAX];     int front, rear;    } queue;

void init_queue (queue *q) {
    q -> front = -1;    q -> rear = -1;   }

int isempty (queue *q)  {
    return q -> front == -1;    }

void enqueue( queue * q, int val)   {
    if (q -> rear == MAX - 1)
    return;
    if (q -> front == -1)   {
        q -> front = 0;      q -> rear ++;      q -> items [q -> rear] =val;    }   }

int dequeue (queue *q)  {
    if (isempty (q))
        return -1;
    int item = q -> items [q -> front];
    if (q -> front == q -> rear)
    {        q -> front = q -> rear -1;}    
    else    {   q -> front ++;}
    return item;        }

typedef struct { queue q1, q2;} stack;

void init_stack (stack *s) {
    init_queue (&s -> q1);      init_queue (&s -> q2);    }

void push (stack *s, int val)   {
    enqueue (&s -> q1, val);    } //enters the value in q1}

void  Dequeue (stack *s)
{ while (!isempty (&s -> q1))   {
        int item = dequeue (&s -> q1);
         enqueue (&s -> q2, dequeue (&s -> q1));    }
    queue temp = s -> q1;   s -> q1 = s -> q2;      s -> q2 = temp;    }

int pop (stack *s)  {
    if (isempty (&s -> q1))
        return -1;
    return dequeue (&s -> q1);      }

int top (stack *s){
    if (isempty (&s -> q1))
        return -1;
    return s -> q1.items [s -> q1.front];}
    
int main ()
{    stack s;
    init_stack (&s);
    push (&s, 10);      push (&s, 20);      push (&s, 30);
    printf ("Top element: %d\n", top (&s));
    printf ("Popped element: %d\n", pop (&s));
    printf ("Top element after pop: %d\n", top (&s));
    return 0;       }