#include<stdio.h>
int Binary_Search(int arr[],int f,int l,int ele)
{
    
   int mid=(f+l)/2;
    if(f<=l)
    {
        if(arr[mid]>ele)
        {
            return Binary_Search(arr,f,mid-1,ele);
        }
        else if(arr[mid]<ele)
        {
             return Binary_Search(arr,mid+1,l,ele);
        }
       else if(arr[mid]==ele)
       {
          return mid;
       }
       return -1;
    }
    
}
int linear_search(int arr[],int n,int ele)
{
for(int i=0;i<n;i++)
    if(arr[i]==ele)
    return i;
    return -1;
}
int main()
{
    int arr[20];
    int x,y,i,n,f,l,ele;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the  sorted array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter the element to be searched");
    scanf("%d",&ele);
    f=0;
    l=n-1;
    x=Binary_Search(arr,f,l,ele);
    if(x==-1)
    printf("number not found");
    else
    printf("number found at index %d",x);
    y=linear_search(arr,n,ele);
    if(y==-1)
    printf("number not found(linear search)");
    else
    printf("number found at index %d(lienar search)",x);

}
