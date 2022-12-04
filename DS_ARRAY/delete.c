#include<stdio.h>
int delete(int a[],int size)
{
    int ele;
    printf("\nENTER ELEMENT TO DELETE:");
    scanf("%d",&ele);
    for (int i=0;i<size;i++)
    {
        if (a[i]==ele)
        {
            for (int j=i;j<size-1;j++)
            {
                a[j]=a[j+1];
            }
            (size)--;
        }
    }
    printf("array");
    for(int i=0;i<size;i++)
    printf("%d  ",a[i]);
    return 0;
}
int main()
{
    int a[100],size,i;
    printf("ENTER THE SIZE OF THE ARRAY");
    scanf("%d",&size);
    printf("ENTER THE ELEMENTS OF THE ARRAY");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    delete(a,size);
    return 0;
}