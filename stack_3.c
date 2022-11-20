#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
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
int pop(struct stack *s1)
{
        int c=s1->arr[s1->top];
        s1->top=s1->top-1;
        return c;
}
void push(struct stack *s1,int item)
{
        s1->top=s1->top+1;
        s1->arr[s1->top]=item;
}        
int main()
{
    int a,r=0,x=0;
    s= (struct stack*)malloc(sizeof(struct stack));
    create(s);
    printf("ENTER THE NUMBER TO BE CHNAGED FROM DECIMAL TO OCTAL\n");
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%8;
        push(s,r);
        a=a/8;
    }
    while(!empty(s))
    {
        x=pop(s);
        printf("%d",x);
    }
}