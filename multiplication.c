#include<stdio.h>
int main()
{
    int A[100][100];
    int B[100][100];
    int C[100][100];
    int i,j,n1,n2,m1,m2,k;
    printf("enter row and column of the array A ");
    scanf("%d%d",&m1,&n1);
    printf("enter the elements of the array A");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        scanf("%d",&A[i][j]);
    }
    printf("enter row and column of the array B ");
    scanf("%d%d",&m2,&n2);
    printf("enter the elements of the array B");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        scanf("%d",&B[i][j]);
    }
    if(m1==n2)
    {
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            C[i][j]=0;
        for(k=0;k<m2;k++)
        {
            C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
        }
    }
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d  ",C[i][j]);
        }
        printf("\n");
    }
    }
    else
        printf("multiplication not possible");
}

