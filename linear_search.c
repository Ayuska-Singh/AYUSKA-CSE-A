#include<stdio.h>
void print(int arr[],int n)
{
    printf("\n ARRAY ELEMENTS\n");
    for(int i=0;i<n;i++)
    printf("%d  ",arr[i]);
    printf("\n");
}
void searching(int arr[],int n)
{
   int i,j,ele;
   printf("ENTER THE ELEMENT TO BE SEARCHED\n");
   scanf("%d",&ele);
   for(i=0;i<n;i++)
   {
    if(ele==arr[i])
    break;
   } 
   if(i!=n)
   printf("NUMBER %d FOUND AT POSITION %d ",arr[i],i+1);
}
void input()
{
    int arr[100];
    int size;
    printf("ENTER THE SIZE OF THE ELEMENTS\n");
    scanf("%d",&size);
    printf("ENTER THE ELEMENTS OF THE ARRAY\n");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    print(arr,size);
    searching(arr,size);
}
int main()
{
   input();
}
