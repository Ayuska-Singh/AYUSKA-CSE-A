#include<stdio.h>
#include<string.h>
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
void bubbleSort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)

for (j = 0; j < n-i-1; j++)
if (arr[j] < arr[j+1])
swap(&arr[j], &arr[j+1]);
}
int min(int a[],int n)
{
    int min=a[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return i;
}
struct student
{
    char name[20];
    int r;
    int marks[6];
};
struct student s;
int main()
{
    int sum=0;
    int m;
    printf("ENTER THE ROLL NUMBER OF STUDENT \n");
    scanf("%d",&s.r);
    printf("ENTER THE NAME OF THE STUDENT \n");
    fflush(stdin);
    gets(s.name);
        //scanf("%s",s.name);
    printf("ENTER THE MARKS OF THE STUDENT \n");
    for(int i=0;i<6;i++)
    scanf("%d",&s.marks[i]);
   // bubbleSort(s.marks,6);
    for(int i=0;i<4;i++)
    sum=sum+s.marks[i];
    m=min(s.marks,6);
    sum=sum-s.marks[m];
    s.marks[m]=101;
   // m=min(s.marks,6);
   // sum=sum-s.marks[m];
    if(sum/4>=95)
    printf("STUDENT IS ELEGIBLE FOR ADMISSION\n");
    else
    printf("STUDENT IS NOT ELEGIBLE FOR ADMISSION\n");
}

