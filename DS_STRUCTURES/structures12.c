#include<stdio.h>
struct salary
{
    char name[20];
    int salary;
    int hrs;
}s[10];
void SALARY()
{
    for(int i=0;i<10;i++)
    {
        if(s[i].hrs>=8)
        {
            s[i].salary+=50;
            printf("NAME : %s\n",s[i].name);
            printf("WORKING HAOURS PER DAY : %d\n",s[i].hrs);
            printf("NEW SALARY : %d\n",s[i].salary);
        }
    }
}
int main()
{
    for(int i=0;i<10;i++)
    {
        printf("NAME : ");
        fflush(stdin);
        gets(s[i].name);
        printf("SALARY : ");
        scanf("%d",&s[i].salary);
        printf("WORKING HOURS PER DAY : ");
        scanf("%d",&s[i].hrs);
    }
    SALARY();
}
