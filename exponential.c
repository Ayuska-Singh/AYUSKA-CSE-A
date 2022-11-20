#include<stdio.h>
#include<math.h>
int min(int a,int b)
{
    if(a>b)
    return b;
    else
    return a;
}
int binary_search(int arr[],int l,int r,int x)
{
    if(r>=1)
    {
        int mid=l+(r-1)/2;
        if(arr[mid]==x)
        return mid;
        if(arr[mid]>x)
        return binary_search(arr,l,mid-1,x);
        return binary_search(arr,mid+1,r,x);
    }
    return -1;
}
int exponential_search(int arr[],int n,int x)
{
    if(arr[0]==x)
    return 0;
    int i=1;
    while(i<n&&arr[i]<=x)
    i=i*2;
    return binary_search(arr,1/2,min(i,n-1),x);
}
int main()
{
    int arr[20];
    int i,x,n;
    int result;
    printf("enter the size of the array");
   scanf("%d",&n);
   printf("enter the elements of the array");
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   printf("enter the element to be searched");
   scanf("%d",&x);
   result=exponential_search(arr,n,x);
   (result==-1)?printf("element not found"):printf("element found at index %d",result);
}