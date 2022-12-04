#include<stdio.h>
void PUSH(int STACK[],int SIZE,int ITEM,int TOP)
{
    if(TOP==SIZE)
    {
        printf("OVERFLOW\n");
        return;
    }
    else
    {
        {
        STACK[TOP]=ITEM;
        printf("%d  ",STACK[TOP]);
        TOP=TOP+1;
        }
    }
   
}
void POP(int STACK[],int SIZE,int TOP)
{
    int ITEM;
    for(int i=0;i<=SIZE;i++)
    {
        if(TOP==-1)
    {
        printf("UNDERFLOW\n");
        return;
    }
    else
    {
        ITEM=STACK[TOP];
        printf("%d  ",ITEM);
        TOP=TOP-1;
    }
    }
    return;
} 
int main()
{
    int STACK[10];
    int A[10]={1,2,3,4,6,8,9,22,66,77};
    for(int i=0;i<=10;i++)
    PUSH(STACK,10,A[i],i);
    POP(STACK,10,9);
}
