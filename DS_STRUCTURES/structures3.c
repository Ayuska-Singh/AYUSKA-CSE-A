#include<stdio.h>
#include<string.h>
struct student
{
    int r;
    char name[20];
    int age;
    char address[100];
    int marks;
};
struct student s[15];
int main()
{
    for(int i=0;i<15;i++)
    {
        printf("ENTER THE NAME OF THE STUDENT \n");
        fflush(stdin);
        gets(s[i].name);
        printf("ENTER THE ADDRESS OF THE STUDENT\n");
        fflush(stdin);
        gets(s[i].address);
        printf("ENTER THE ROLL NUMBER AGE MARKS OF STUDENT\n");
        scanf("%d",&s[i].r,s[i].age,s[i].marks);
    }
    for(int i=0;i<15;i++)
    {
        printf("ROLL NO.     %d\n",s[i].r);
        printf("NAME         %s\n",s[i].name);
        printf("AGE          %d\n",s[i].age);
        printf("ADDRESS      %s\n",s[i].address);
        printf("MARKS        %d\n",s[i].marks);   
    }
}

