#include<stdio.h>
#include<string.h>
struct student
{
    int r;
    char name[20];
    int age;
    int marks;
};
struct student s[5];
int main()
{
    for(int i=0;i<5;i++)
    {
        printf("ENTER THE ROLL NUMBER AGE MARKS OF STUDENT\n");
        scanf("%d",&s[i].r,s[i].age,s[i].marks);
        printf("ENTER THE NAME OF THE STUDENT %d\n",i+1);
        fflush(stdin);
        gets(s[i].name);
    }
    for(int i=0;i<5;i++)
    {
        printf("ROLL NO.  %d\n",s[i].r);
        printf("NAME      %s\n",s[i].name);
        printf("AGE       %d\n",s[i].age);
        printf("MARKS     %d\n",s[i].marks);   
    }
}

