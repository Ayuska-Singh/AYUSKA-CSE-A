#include<stdio.h>
int main()
{
    int a[100];
    int i,j,k,n,m,t=0;
    printf("enter the  array size");
    scanf("%d",&n);
    printf("enter the  array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    j=n-1;
    while(i<j)
    {
       t=a[i];
       a[i]=a[j];
       a[j]=t;
       i++;
       j--;
    }
    printf("reverse array\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
