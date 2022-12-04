#include<stdio.h>
#include<stdbool.h>
#define size 6
struct queue
{
    char queue[10];
    int front;
    int rear;
}q;
void initialize()
{
    q.front=-1;
    q.rear=-1;
}
bool isEmpty()
{
   if(q.front==-1) 
   return true;
   else
   return false;
}   
bool isFull()
{
    if((q.front==0&&q.rear==size-1)||(q.front==q.rear+1))
    return true;
    else
    return false;
}
void delete_front()
{
    if (isEmpty()) {
        printf("UNDERFLOW\n");
        return;
    }
    char x=q.queue[q.front];
    if (q.front == q.rear) {
        q.front = -1;
        q.rear = -1;
    }
    else
        if (q.front == size - 1)
        q.front = 0;
 
    else
        q.front = q.front + 1;

    printf("%c is deleted from front\n",x);    
}
void delete_rear()
{
    if(isEmpty())
    {
        printf("UNDERFLOW\n");
        return;
    }
    char x=q.queue[q.rear];
    if (q.front == q.rear) {
        q.front = -1;
        q.rear = -1;
    }
    else if (q.rear == 0)
        q.rear = size - 1;
    else
        q.rear = q.rear - 1;

    printf("%c is deleted from rear\n",x);
}
void insert_front(char x)
{
    if (isFull()) {
        printf( "Overflow\n");
        return;
    }
    if (q.front == -1) {
        q.front = 0;
        q.rear = 0;
    }
    else if (q.front == 0)
        q.front = size - 1;
 
    else 
        q.front = q.front - 1;

    q.queue[q.front] = x;
    printf("%c is inserted in front\n",x);
}
void insert_rear(char x)
{
    if (isFull()) {
        printf( "Overflow\n");
        return;
    }
    if (q.front == -1) {
        q.front = 0;
        q.rear = 0;
    }
    else if (q.rear == size - 1)
        q.rear = 0;
 
    else
        q.rear = q.rear + 1;
 
    q.queue[q.rear] = x;
    printf("%c is inserted in rear\n",x);
}
int main()
{
    initialize();
    insert_front('A');
    insert_front('B');
    insert_rear('C');
    insert_rear('F');
    delete_rear();
    delete_rear();
    insert_front('K');
    insert_front('L');
    insert_front('M');
    delete_front();
    insert_front('R');
    insert_rear('S');
    insert_rear('T');
    insert_rear('W');
}