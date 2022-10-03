#include<stdio.h>
void DIFF_A_ARRAY(int A[10],int N,int B[10],int M)
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
        else if(A[i]>B[j])
        {
            j++;
        }
        else
        {
            j++;
            i++;
        }
    }
    while(i<M)
    {
        C[k]=A[i];
        k++;
        i++;
    }
    printf("DIFFERENCE A-B OF THE  ARRAY IS \n");
    for(i=0;i<k;i++)
            printf(" %d ",C[i]);
}
void DIFF_B_ARRAY(int A[10],int N,int B[10],int M)
{
    int C[100];
    int k=0,i=0,j=0;
    while(i<M && j<N)
    {
        if(A[i]<B[j])
        {
            i++;
        }
        else if(A[i]>B[j])
        {
            C[k]=B[j];
            j++;
            k++;
        }
        else
        {
            j++;
            i++;
        }
    }
    while(j<N)
    {
        C[k]=B[j];
        k++;
        j++;
    }
    printf("\nDIFFERENCE B-A OF THE  ARRAY IS \n");
    for(i=0;i<k;i++)
            printf(" %d ",C[i]);
}
int main()
{
    int A[100];
    int B[100];
    int N,M,i;
    printf("AYUSKA SINGH\nCSE-A\n2100320100051\n");
    printf("enter the size of array A\n");
    scanf("%d",&M);
    printf("enter the elements of array A\n");
    for(i=0;i<M;i++)
        scanf("%d",&A[i]);
        printf("enter the size of array B\n");
    scanf("%d",&N);
    printf("enter the elements of array B\n");
    for(i=0;i<N;i++)
        scanf("%d",&B[i]);
        DIFF_A_ARRAY(A,N,B,M);
        DIFF_B_ARRAY(A,N,B,M);

}

