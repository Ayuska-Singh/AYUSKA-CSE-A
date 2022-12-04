#include<stdio.h>
#include<string.h>
struct student
{
    int r;
    char name[20];
    int age;
    char address[100];
};
struct student s[15];
void AGE_14()
{
    printf("DETAILS OF STUDENTS OF AGE 14\n");
    for(int i=0;i<15;i++)
    {
        if(s[i].age==14)
        {
            printf("ROLL NO. %d\n",s[i].r);
            printf("NAME  %s\n",s[i].name);
            printf("ADDRESS  %s\n",s[i].address);
        }
    }
}
void EVEN_ROLL_NO()
{
    printf("DETAILS OF STUDENTS OF EVEN ROLL NO.\n");
    for(int i=0;i<15;i++)
    {
        if(s[i].r%2==0)
        {
            printf("ROLL NO. %d\n",s[i].r);
            printf("NAME  %s\n",s[i].name);
            printf("AGE %d\n",s[i].age);
            printf("ADDRESS  %s\n",s[i].address);
        }
    }
}
void USER_CHOICE()
{
    int i;
    printf("ENTER THE ROLL NO. WHOSE DETAILS IS TO BE GIVEN\n");
    scanf("%d",&i);
    printf("ROLL NO. %d\n",s[i].r);
    printf("NAME  %s\n",s[i].name);
    printf("AGE %d\n",s[i].age);
    printf("ADDRESS  %s\n",s[i].address);
}
int main()
{
    printf("ENTER THE ROLL NO. NAME AGE(between 11 to 14) ADDRESS \n");
    for(int i=0;i<15;i++)
    {
        scanf("%d",&s[i].r);
        fflush(stdin);
        gets(s[i].name);
        scanf("%d",&s[i].age);
        fflush(stdin);
        gets(s[i].address);
    }
    AGE_14();
    EVEN_ROLL_NO();
    USER_CHOICE();
}
