#include<stdio.h>
void MERGE_ARRAY(int A[10],int N,int B[10],int M)
{
    int C[100];
    int k=0,i=0,j=0;
    while(i<M && j<N)
    {
        if(A[i]<B[j])
        {
            C[k]=A[i];
            k++;
            i++;
        }
        else
        {
            C[k]=B[j];
            j++;
            k++;
        }
    }
    while(i<M)
    {
        C[k]=A[i];
        k++;
        i++;
    }
    while(j<N)
    {
        C[k]=B[j];
        j++;
        k++;
    }
    printf("MERGED ARRAY IS \n");
    for(i=0;i<M+N;i++)
            printf(" %d ",C[i]);
}
int main()
{
    int A[100];
    int B[100];
    int N,M,i;
    printf("enter the size of array A");
    scanf("%d",&M);
    printf("enter the elements of array A");
    for(i=0;i<M;i++)
        scanf("%d",&A[i]);
        printf("enter the size of array B");
    scanf("%d",&N);
    printf("enter the elements of array B");
    for(i=0;i<N;i++)
        scanf("%d",&B[i]);
        MERGE_ARRAY(A,N,B,M);

}
