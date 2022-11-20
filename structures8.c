#include<stdio.h>
#include<string.h>
struct complex
{
    int REAL;
    int COMPLEX;
}c1,c2;
void complex_sum()
{
    int sumR=0,sumC=0;
    sumR=c1.REAL+c2.REAL;
    sumC=c1.COMPLEX+c2.COMPLEX;
    printf("THE SUM OF TWO COMPLEX NUMBER is %d %di\n",sumR,sumC);
}
void complex_diff()
{
    int diffR=0,diffC=0;
    diffR=c1.REAL-c2.REAL;
    diffC=c1.COMPLEX-c2.COMPLEX;
    printf("THE DIFFERENCE OF TWO COMPLEX NUMBER is %d %di\n",diffR,diffC);
}
void complex_product()
{
    int productR=0,productC=0;
    productR=c1.REAL*c2.REAL-c1.COMPLEX*c2.COMPLEX;
    productC=c1.REAL*c2.COMPLEX+c1.COMPLEX*c2.REAL;
    printf("THE MULTIPLICATION OF TWO COMPLEX NUMBER is %d %di\n",productR,productC);
}
int main()
{
    int sumR=0,sumC=0;
    printf("ENTER THE FIRST COMPLEX PARTS\n ");
    scanf("%d%d",&c1.REAL,&c1.COMPLEX);
    printf("ENTER THE SECOND COMPLEX PARTS\n ");
    scanf("%d%d",&c2.REAL,&c2.COMPLEX);
    complex_sum();
    complex_diff();
    complex_product();
}
