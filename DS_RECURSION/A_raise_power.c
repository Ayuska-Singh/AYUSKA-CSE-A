#include<stdio.h>
int power(int n,int A,int p)
{
    if(n==0)
    return p;
    else 
    return power(n-1,A,(A*p));
}
int main()
{
    int n,A,f;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of A");
    scanf("%d",&A);
    f=power(n,A,1);
    printf("%d raised to the power %d is %d",A,n,f);
    return 0;
}