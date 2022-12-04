#include<stdio.h>
int main()
{
    int arr[100];
    int DAT[100]={0};
    int i,n,max=0,a=0;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
            max=arr[i+1];
    }
    for(i=0;i<n;i++)
    {
       DAT[arr[i]]++;
    }
    for(i=1;i<=max+1;i++)
    {
        if (DAT[i]>1)
        printf("repeated element is %d  %d times\n",i,DAT[i]);
    }
}





