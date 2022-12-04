#include<stdio.h>
struct postfix
{
    int stack[20];
    int top;
}s;
int initialize()
{
    s.top=-1;
}
int pop()
{
    int x=s.stack[s.top];
    s.top--;
    return x;
}
void push(int item)
{
        s.top=s.top+1;
        s.stack[s.top]=item;
}
int evaluate(int a,int b,char op)
{
    switch(op)
    {
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/': return a/b;
        case '%': return a%b;
    }
}
int postfixevaluation(char postfix[])
{
    int a,b,x;
    char symb;
    initialize();
    int i=0;
    while(postfix[i]!='\0')
    {
        symb=postfix[i];
        if(symb>='0'&&symb<='9')
        push(symb-'0');
        else
        {
            b=pop();
            a=pop();
            x=evaluate(a,b,symb);
            push(x);
        }
        i++;
    }
    x=pop();
    return x;
}
int main()
{
    char postfix[20];
    int x;
    scanf("%s",&postfix);
    x=postfixevaluation(postfix);
    printf("evaluation %d",x);
}