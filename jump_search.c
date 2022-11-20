#include<stdio.h>
#include<math.h>
int min(int a,int b)
{
    if(a>b)
    return b;
    else
    return a;
}
int jump_search(int arr[],int n,int x)
{
    int step=sqrt(n);
    int prev=0;
    while(arr[min(step,n)-1]<x)
    {
        prev=step;
        step=sqrt(n);
        if(prev>=n)
        return -1;
    }
    while(arr[prev]<x)
    {
        prev++;
        if(prev==min(step,n))
        return-1;
    }
    if(arr[prev]==x)
    return prev;
    return -1;
}
int main()
{
   int arr[20];
   int x,n,i,index;
   printf("enter the soze of the array");
   scanf("%d",&n);
   printf("enter the elements of the array");
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   printf("entee the element to be searched");
   scanf("%d",&x);
   index=jump_search(arr,n,x);
   if(index>=0)
   printf("number found at index %d",index);
   else
   printf("number not found");
}
