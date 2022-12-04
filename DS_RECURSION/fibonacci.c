#include<stdio.h>
int DAT[101];
int fib(int n)
{
    if(n==1||n==2)
    return DAT[n]=n-1;
    else
    {
        if(DAT[n]==0)
        {
             DAT[n]=(fib(n-1)+fib(n-2));
        }
    } 
    return DAT[n];
}
int main()
{
    int i,x;
    for(i=1;i<=100;i++)
    {
        printf("%d => %d\n",i,fib(i));
    }
    return 0;
}
