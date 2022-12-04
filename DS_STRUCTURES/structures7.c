#include<stdio.h>
#include<string.h>
struct marks
{
    int rollno;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    int percent;
}m[5];
int main()
{
    int sum;
    int percent;
    printf("ENTER THE ROLL NO. AND NAME OF STUDENT AND THEIR MARKS OF CHEM ,MATHS,PHY\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d%d%d%d",&m[i].rollno,&m[i].chem_marks,&m[i].maths_marks,&m[i].phy_marks);
        fflush(stdin);
        gets(m[i].name);
    }
    for(int i=0;i<5;i++)
    {
        m[i].percent=(m[i].chem_marks+m[i].maths_marks+m[i].phy_marks)/3;
    }
    printf("PERCENTAGE OF EACH STUDENT\n");
    printf("ROLL NO.           NAME               PERCENTAGE\n");
    for(int i=0;i<5;i++)
    printf("  %d                %s                 %d\n",m[i].rollno,m[i].name,m[i].percent);
}
