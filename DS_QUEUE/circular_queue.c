#include<stdio.h>
#define N 10
struct queue
{
    int queue[10];
    int front;
    int rear;
}q;
void initialize()
{
    q.front=0;
    q.rear=0;
}
void insert(int item)
{
    if((q.front==1 && q.rear==N)||(q.front==q.rear+1))
    {
        printf("OVERFLOW\n");
        return;
    }
    if(q.front==0 && q.rear==0)
    {
        q.front=1;
        q.rear=1;
    }
    else if(q.rear==N)
    q.rear=1;
    else
    q.rear+=1;
    q.queue[q.rear]=item;
    printf("%d inserted\n",item);

}
int delete()
{
    if(q.front==0)
    {
        printf("Underflow\n");
        return;
    }
    int item=q.queue[q.front];
    if(q.front==q.rear)
    {
        q.front=0;
        q.rear=0;
    }
    else if(q.front==N)
    q.front=N;
    else
    q.front+=1;
    return item;
}
int main()
{
    int x;
    //q=(struct queue *)malloc(sizeof(struct queue));
    initialize();
    insert(1);
    insert(2);
    insert(3);
    x=delete();
    printf("%d deleted\n",x);
    insert(4);
    insert(5);
    x=delete();
    printf("%d deleted\n",x);
    x=delete();
    printf("%d deleted\n",x);
    insert(6);
    x=delete();
    printf("%d deleted\n",x);
    insert(7);
    insert(8);
    x=delete();
    printf("%d deleted\n",x);
    x=delete();
    printf("%d deleted\n",x);
    insert(9);
    x=delete();
    printf("%d deleted\n",x);
    x=delete();
    printf("%d deleted\n",x);
    x=delete();
    printf("%d ",x);
}
   