#include<stdio.h>
#include<string.h>
struct time
{
    int hrs;
    int mins;
    int secs;
}t1,t2;
int main()
{
    int sumH=0,sumM=0,sumS=0;
    printf("ENTER THE FIRST TIME IN HRS MIN AND SECONDS\n");
    scanf("%d%d%d",&t1.hrs,&t1.mins,&t1.secs);
    printf("ENTER THE SECOND TIME IN HRS MIN AND SECONDS\n");
    scanf("%d%d%d",&t2.hrs,&t2.mins,&t2.secs);
    sumS=t1.secs+t2.secs;
    sumM=t1.mins+t2.mins;
    sumH=t1.hrs+t2.hrs;
    sumM=sumM+sumS/60;
    sumS=sumS%60;
    sumH=sumH+sumM/60;
    sumM=sumM%60;
    printf("THE SUM OF GIVEN TIME IS %d HRS %d MINS %d SECS\n",sumH,sumM,sumS);
    return 0;
}
