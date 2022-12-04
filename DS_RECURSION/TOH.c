#include<stdio.h>
void TOH(int n,char A,char B,char C)
{
    if(n==1)
   {
     printf("move disc %d from %c to %c\n",n,A,C);
     return;
   }
    TOH(n-1,A,C,B);
    printf("move disc %d from %c to %c\n",n,A,B);

    TOH(n-1,B,A,C);
    return;
}
int main()
{
  int n;
  printf("enter the number of discs");
  scanf("%d",&n);
    TOH(n,'A','B','C');
}