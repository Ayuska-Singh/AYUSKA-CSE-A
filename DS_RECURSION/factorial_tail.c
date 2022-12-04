#include<stdio.h>
int fact(int n,int k)
{
    if(n==0)
    return k;
    else 
    return fact(n-1,n*k);
}
int main()
{
    int n,f;
    printf("enter the number whose factorial is to be given");
    scanf("%d",&n);
    f=fact(n,1);
    printf("the factorial of the number enetered is %d",f);
    return 0;
}