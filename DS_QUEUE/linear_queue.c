#include<stdio.h>
#include<stdbool.h>
#define N 10
struct queue
{
    int queue[10];
    int front;
    int rear;
}q;
void initialize()
{
    q.front=-1;
    q.rear=-1;
}
/**************************************************************************/
 bool is_empty()
{
    if (q.front==q.rear)
    {
        return true;
    }
    else
        return false;

}
/**************************************************************************/
int Insertqueue(int item)
{
    if(q.rear==N-1)
    {
        printf("Overflow\n");
        // return;
    }
    else
    {
        q.rear+=1;
        q.queue[q.rear]=item;
    }
    //printf("%d",q.queue[q.rear]);
}
/**************************************************************************/
int Deletequeue()
{int item;
    if(is_empty())
    {
        printf("Underflow\n");
    }
    else
    {
        q.front=q.front+1;
 item= q.queue[q.front];
        
    }
   return item;
}
/**************************************************************************/
int main()
{
    int x;
    initialize();
    Insertqueue(100);
    Insertqueue(200);
    Insertqueue(300);
    printf("%d ",Deletequeue());
    printf("%d",Deletequeue());
}