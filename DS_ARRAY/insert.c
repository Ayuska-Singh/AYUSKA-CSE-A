#include<stdio.h>
int main()
{
    int a[100];
    int i,j,k,n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the number to be inserted with index\n");
    scanf("%d%d",&j,&k);
    for(i=(n-1);i>=k;i--)
{
    a[i+1]=a[i];
}
a[k]=j;
for(i=0;i<=n;i++)
printf("%d ",a[i]);
return 0;
}