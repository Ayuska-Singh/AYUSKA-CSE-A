#include<stdio.h>
#include<string.h>
struct complex
{
    int REAL;
    int COMPLEX;
}c1,c2;
//struct height h1,h2;
int main()
{
    int sumR=0,sumC=0;
    printf("ENTER THE FIRST COMPLEX PARTS\n ");
    scanf("%d%d",&c1.REAL,&c1.COMPLEX);
    printf("ENTER THE SECOND COMPLEX PARTS\n ");
    scanf("%d%d",&c2.REAL,&c2.COMPLEX);
    sumR=c1.REAL+c2.REAL;
    sumC=c1.COMPLEX+c2.COMPLEX;
    printf("THE SUM OF TWO COMPLEX NUMBER is %d %di\n",sumR,sumC);
}

