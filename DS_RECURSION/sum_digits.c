#include<stdio.h>
int sum_digits(int n,int sum)
{
    if(n==0)
    return sum;
    else
    return(sum_digits(n/10,sum+n%10));
}
int main()
{
    int n,sum=0;
    printf("enter the number \n");
    scanf("%d",&n);
    sum=sum_digits(n,0);
    printf("sum of the digits of the number entered is %d",sum);
    return 0;
}
