#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct stack
{
    char arr[20];
    int top;
}*s1;
void create(struct stack *s)
{
    s->top=-1;
}
bool empty(struct stack *s1)
{
    return (s1->top==-1);
}
int pop(struct stack *s)
{
        char c=s->arr[s->top];
        s->top=s->top-1;
        return c;
}
void push(struct stack *s,char item)
{
        s->top=s->top+1;
        s->arr[s->top]=item;
}
int main()
{
    char str1[100];
    int i=0;
    char x1,x2;
    s1= (struct stack*)malloc(sizeof(struct stack));
    create(s1);
    printf("ENTER THE FIRST STRING\n");
    fflush(stdin);
    gets(str1);
    while(str1[i]!='\0')
    {
        push(s1,str1[i]);
        i++;
    }
    i=0;
    while(!empty(s1)&&str1[i]!='\0')
    {
        x1=pop(s1);
        if(x1!=str1[i++])
        break;
        //printf("%c",x);
    }
    if(s1->top==-1&&str1[i]=='\0')
    printf("THE STRING IS PALINDROME\n");
    else
    printf("NOT PALINDROME");
}        