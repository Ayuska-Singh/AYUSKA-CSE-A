#include<stdio.h>
int  reverse(int n,int temp)
{
    if(n==0)
    return temp;
    else
    temp=temp*10+n%10;
     (reverse(n/10,temp));
}
int main()
{
    int n,n1;
    printf("-----enter the number for its reverse-----");
    scanf("%d",&n);
    n1=reverse(n,0);
    printf("----reverse of the given number is %d----",n1);
}