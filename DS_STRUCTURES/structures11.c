#include<stdio.h>
#include<string.h>
struct date
{
    char day[20];
    int month;
    int year;
}d1,d2;
int main()
{
    printf("ENTER THE FIRST DATE WITH ITS DAY, MONTH, AND YEAR\n");
    scanf("%s%d%d",&d1.day,&d1.month,&d1.year);
    printf("ENTER THE SECOND DATE WITH ITS DAY, MONTH, AND YEAR\n");
    scanf("%s%d%d",&d2.day,&d2.month,&d2.year);
    if((d1.day==d2.day)&&(d1.month==d2.month)&&(d1.year==d2.year))
    printf("DATES ARE EQUAL");
    else
    printf("DATE ARE NOT EQUAL");
}
