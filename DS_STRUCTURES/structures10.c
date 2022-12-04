#include<stdio.h>
#include<string.h>
struct bank
{
    char name[20];
    char acc_number[30];
    int balance;
}b[15];
void BALANCE_LESS_THAN_200()
{
    printf("CUSTOMERS WITH BALANCE LESS THAN 200\n");
    for(int i=0;i<15;i++)
    {
        if(b[i].balance==200)
        {
        printf("NAME : %s\n",b[i].name);
        printf("ACCOUNT NUMBER : %s\n",b[i].acc_number);
        }
    }
}
void BALANCE_INCREEMENT()
{
    printf("CUSTOMERS WITH BALANCE MORE THAN 1000\n");
    for(int i=0;i<15;i++)
    {
        if(b[i].balance>1000)
        {
            b[i].balance+=100;
            printf("NAME : %s\n",b[i].name);
            printf("ACCOUNT NUMBER : %s\n",b[i].acc_number);
            printf("NEW BALANCE : %d\n",b[i].balance);
        }
    }
}
int main()
{
    for(int i=0;i<15;i++)
    {
        printf("NAME : ");
        fflush(stdin);
        gets(b[i].name);
        printf("ACCOUNT NUMBER : ");
        fflush(stdin);
        gets(b[i].acc_number);
        printf("BALANCE : ");
        scanf("%d",&b[i].balance);
    }
    BALANCE_LESS_THAN_200();
    BALANCE_INCREEMENT();
}
