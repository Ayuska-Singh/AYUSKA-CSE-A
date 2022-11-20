#include<stdio.h>
#include<string.h>
int fact(int n,int k)
{
    if(n==0)
    return k;
    else 
    return fact(n-1,n*k);
}
int power(int n,int A,int p)
{
    if(n==0)
    return p;
    else 
    return power(n-1,A,(A*p));
}
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
int GCD(int a,int b)
{
    if(a%b==0)
    return b;
    else
    return GCD(b,a%b);
}
void TOH(int n,char A,char B,char C)
{
    if(n==1)
   {
     printf("MOVE DISC %d FROM %c TO %c\n",n,A,C);
     return;
   }
    TOH(n-1,A,C,B);
    printf("MOVE DISC %d FROM %c TO %c\n",n,A,B);

    TOH(n-1,B,A,C);
    return;
}
int reverse(int n,int temp)
{
    if(n==0)
    return temp;
    else
    temp=temp*10+n%10;
     (reverse(n/10,temp));
}
int sum_digits(int n,int sum)
{
    if(n==0)
    return sum;
    else
    return(sum_digits(n/10,sum+n%10));
}
void string_palindrome(char str[])
{
    int l=0;
    int h=strlen(str)-1;
    while(h>l)
    {
        if(str[l++]!=str[h--])
        {
            printf("%s IS NOT PALINDROME\n",str);
        }
    }
    printf("%s IS A PALINDROME\n",str);
}
int main()
{
    int n1,A,f,i,x,a,b,sum=0,l=0;
    char str[50];
    printf("ENTER THE NUMBER WHOSE FACTORIAL IS TO BE GIVEN\n");
    scanf("%d",&n1);
    printf("THE FACTORIAL OF THE NUMBER ENTERED IS %d\n",fact(n1,1));
    int n2;
    printf("ENTER THE VALUE OF N FOR POWER CALCULATION\n");
    scanf("%d",&n2);
    printf("ENTER THE VALUE OF A\n");
    scanf("%d",&A);
    printf("%d RAISED TO THE POWER %d IS %d\n",A,n2,power(n2,A,1));
    int n;
    printf("ENTER THE VALUE OF N TO CALCULATE THE FIBONACCI SERIES\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d => %d\n",i,fib(i));
    printf("ENTER THE NUMBERS FOR THEIR GCD\n");
    scanf("%d%d",&a,&b);
    printf("GCD OF THE GIVEN NUMBERS IS %d\n",GCD(a,b));
    int n3;
    printf("ENTER THE NUMBER OF DISCS\n");
    scanf("%d",&n3);
    TOH(n3,'A','B','C');
    int n4;
    printf("ENTER THE NUMEBR FOR ITS REVERSE\n");
    scanf("%d",&n4);
    printf("REVERSE OF THE NUMBER ENTERED IS %d\n",reverse(n4,0));
    int n5;
    printf("ENTER THE NUMBER FOR SUM OF ITS DIGITS \n");
    scanf("%d",&n5);
    printf("SUM OF THE DIGITS OF THE NUMBER ENTERED %d\n",sum_digits(n5,0));
    printf("ENTER THE STRING\n");
    scanf("%s",&str);
    string_palindrome(str);
}