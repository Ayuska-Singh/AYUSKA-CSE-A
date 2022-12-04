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
    int DAT[36]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int a,b,r=0,x=0;
    s= (struct stack*)malloc(sizeof(struct stack));
    create(s);
    printf("ENTER THE NUMBER AND THE BASE TO BE CHANGED FROM DECIMAL\n");
    scanf("%d%d",&a,&b);
    while(a!=0)
    {
        r=a%b;
        push(s,r);
        a=a/b;
    }
    while(!empty(s))
    {
        x=pop(s);
        printf("%c",DAT[x]);
        // if(x<10)
        // printf("%d",x);
        // else if(x>=10&&x<=35)
        // printf("%c",55+x);
    }
}