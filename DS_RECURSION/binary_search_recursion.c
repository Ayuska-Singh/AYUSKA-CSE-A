#include<stdio.h>
int Binary_Search(int arr[],int l,int r,int x)
{
    if(r>=l)
    {
        int mid=(l+r)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
                    return Binary_Search(arr,l,mid-1,x);
        
        else 
        
            return Binary_Search(arr,mid+1,r,x);
        }
    
    return -1;
    
}
int main()
{
    int arr[100],n,ele,y;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the number to be searched\n");
    scanf("%d",&ele);
    y=Binary_Search(arr,0,n-1,ele);
    if(y!=-1)
    printf("number found at index %d",y);
    else 
    printf("number not found");
    return 0;
}
