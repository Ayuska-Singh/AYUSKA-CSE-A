#include<stdio.h>
int main()
{
    int A[100][100];
    int C[100][100];
    int i,j,n1,n2,m1,m2,t=0;
    scanf("%d%d",&n1,&m1);
    printf("enter the elements of the array A");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        scanf("%d",&A[i][j]);
    }
    printf("MATRIX A \n");
     for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        printf("%d  ",A[i][j]);
        printf("\n");
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            if(i>j)
            t=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=t;
        }
    }
    printf("transpose of matrix\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
            printf("%d  ",A[i][j]);
        printf("\n");
    }
}

