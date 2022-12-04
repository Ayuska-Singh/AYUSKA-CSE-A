#include<stdio.h>
int GCD(int a,int b)
{
    if(a%b==0)
    return b;
    else
    return GCD(b,a%b);
}
int main()
{
    int a,b,n;
    printf("enter the numbers for their GCD\n");
    scanf("%d%d",&a,&b);
    n=GCD(a,b);
    printf("GCD of the given numbers is %d",n);
    return 0;
}