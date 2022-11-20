#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//#define max 20;
struct stack
{
    int arr[20];
    int top;
}*s;
void create(struct stack *s1)
{
    s1->top=-1;
}
bool empty(struct stack *s1)
{
    return (s1->top==-1);
}
bool full(struct stack *s1)
{
    return (s1->top==19);
}
void pop(struct stack *s1,int n)
{
    while(n>-1)
    {
        if(empty(s))
    {
        printf("UNDERFLOW\n");
        return;
    }
    else
    {
        printf("%d is popped out of the stack\n",s1->arr[s1->top]);
        s1->top=s1->top-1;
    }
    n--;
    }
}
void push(struct stack *s1,int item)
{
  if(full(s))
    {
        printf("OVERFLOW\n");
        return;
    }
    else
    {
        s1->top=s1->top+1;
        s1->arr[s1->top]=item;
        printf("%d pushed into the stack\n",item);
    }
    
}
int main()
{
    int a;
    s= (struct stack*)malloc(sizeof(struct stack));
    create(s);
    push(s,3);
    push(s,4);
    push(s,8);
    printf("%d is the top position\n",s->arr[s->top]);
    pop(s,0);
    push(s,9);
    pop(s,1);
    printf("%d is the top position\n",s->arr[s->top]);
    int c=s->top;
    pop(s,c);
    if(empty(s))
    printf("STACK IS EMPTY\n");
    else
    printf("NOT EMPTY\n");
}