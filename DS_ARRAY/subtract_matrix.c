#include<stdio.h>
int main()
{
    int A[100][100];
    int B[100][100];
    int C[100][100];
    int i,j,n1,n2,m1,m2;
    printf("enter row and column of the array A ");
    scanf("%d%d",&n1,&m1);
    printf("enter the elements of the array A");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        scanf("%d",&A[i][j]);
    }
    printf("enter row and column of the array B ");
    scanf("%d%d",&n2,&m2);
    printf("enter the elements of the array B");
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        scanf("%d",&B[i][j]);
    }
    if(n1==n2&&m1==m2)
    {
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
            C[i][j]=A[i][j]-B[i][j];
    }
    }
    printf("MATRIX A \n");
     for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        printf("%d  ",A[i][j]);
        printf("\n");
    }
    printf("MATRIX B\n");
     for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        printf("%d  ",B[i][j]);
        printf("\n");
    }
    printf("subtraction of matrix\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
            printf("%d  ",C[i][j]);
        printf("\n");
    }
}

