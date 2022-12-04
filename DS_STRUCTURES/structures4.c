#include<stdio.h>
#include<string.h>
struct height
{
    int feet;
    int inches;
}h1,h2;
int main()
{
    int sumF,sumI,I;
    printf("ENTER THE FIRST HEIGHT IN FEET AND INCHES\n");
    scanf("%d%d",&h1.feet,&h1.inches);
     printf("ENTER THE SECOND HEIGHT IN FEET AND INCHES\n");
    scanf("%d%d",&h2.feet,&h2.inches);
    sumI=h1.inches+h2.inches;
    sumF=h1.feet+h2.feet;
    I=sumI;
    if(sumI>12)
    {
        sumI=sumI%12;
        sumF=sumF+I/12;
    }
    printf("SUM OF HEIGHT IS %d FEET AND %d INCHES\n",sumF,sumI);
}

