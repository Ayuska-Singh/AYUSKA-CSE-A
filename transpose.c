#include<stdio.h>
int main()
{
    int A[100][100];
    int C[100][100];
    int i,j,n1,m1;
    printf("enter the size of matrix A");
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
    printf("transpose of matrix\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
            printf("%d  ",A[j][i]);
        printf("\n");
    }
}



