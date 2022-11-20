#include<stdio.h>
int main()
{
    int arr[20];
    int n,i;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("elements of the array are\n");
    for(i=0;i<n;i++)
    printf("%d   ",arr[i]);
}