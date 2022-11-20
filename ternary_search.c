#include<stdio.h>
int ternary_search(int arr[],int f,int l,int ele)
{
    if(f>=l)
    {
        int mid1=(f+l)/3;
        int mid2=(l-f)/3;
        if(arr[mid1]==ele)
        {
        return mid1;
        }
        else if(arr[mid2]==ele)
        {
        return mid2;
        }
        else if(arr[mid1]>ele)
        {
        return ternary_search(arr,f,mid1-1,ele);
        }
        else if(arr[mid2]<ele)
        {
        return ternary_search(arr,mid2+1,l,ele);
        }
        else
        {
        return ternary_search(arr,mid1+1,mid2-1,ele);
        }
        return -1;
    }
    
}
int main()
{
    int arr[20];
    int x,i,n,f,l,ele;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the  sorted array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter the element to be searched");
    scanf("%d",&ele);
    f=0;
    l=n-1;
    x=ternary_search(arr,f,l,ele);
    if(x==-1)
    printf("number not found");
    else
    printf("number found at index %d",x);
    
}