#include<stdio.h>
struct library
{
    int accession_number;
    char name_of_author[30];
    char book_title[100];
    int flag;
}lib[1000];
void INFORMATION(int n)
{
    printf("BOOK INFORMATION\n");
    for(int i=1;i<=n;i++)
    {
        printf("ACCESSION NUMBER : %d\n",lib[i].accession_number);
        printf("AUTHOR NAME : %s\n",lib[i].name_of_author);
        printf("BOOK TITLE : %s\n",lib[i].book_title);
        if(lib[i].flag==1)
        printf("BOOK IS ISSUED\n");
        else
        printf("BOOK IS NOT ISSUED\n");
    }
}
void ADD_A_NEW_BOOK(int n)
{
    printf("ENTER THE DETAILS OF THE BOOK TO BE ADDED\n");
    printf("ACCESSION NUMBER : ");
    scanf("%d",&lib[n].accession_number);
    printf("NAME OF AUTHOR : ");
    fflush(stdin);
    gets(lib[n].name_of_author);
    printf("BOOK TITLE : ");
    fflush(stdin);
    gets(lib[n].book_title);
}
void SAME_AUTHOR(int n)
{
    int j,k;
    for(int i=0;i<n;i++)
    {
        int size1=sizeof(lib[i].name_of_author);
        int size2=sizeof(lib[i+1].name_of_author);
        if(size1==size2)
        {
            while (j<size1)
        {
            if(lib[i].name_of_author[j]==lib[i+1].name_of_author[j])
            j++;
            else
            break;    
        }
        if(j==size1)
        {
            printf("ACCESSION NUMBER : %d\n",lib[i].accession_number);
            printf("AUTHOR NAME : %s\n",lib[i].name_of_author);
            printf("BOOK TITLE : %s\n",lib[i].book_title);
            if(lib[i].flag==1)
            printf("BOOK IS ISSUED\n");
            else
            printf("BOOK IS NOT ISSUED\n");   
        }
        }
    }
}
void SAME_TITLE(int n)
{
    int j,k;
    for(int i=0;i<n;i++)
    {
        int size1=sizeof(lib[i].book_title);
        int size2=sizeof(lib[i+1].book_title);
        if(size1==size2)
        {
            while (j<size1)
        {
            if(lib[i].book_title[j]==lib[i+1].book_title[j])
            j++;
            else
            break;    
        }
        if(j==size1)
        {
            printf("ACCESSION NUMBER : %d\n",lib[i].accession_number);
            printf("AUTHOR NAME : %s\n",lib[i].name_of_author);
            printf("BOOK TITLE : %s\n",lib[i].book_title);
            if(lib[i].flag==1)
            printf("BOOK IS ISSUED\n");
            else
            printf("BOOK IS NOT ISSUED\n");   
        }
        }
    }
}
int ISSUE_BOOK(char str[],int n)
{
    int j,k;
    int size1=sizeof(str);
    //int size2=sizeof(lib[i+1].book_title);
    for(int i=0;i<n;i++)
    {
        int size2=sizeof(lib[i].book_title);
        if(size1==size2)
        {
            while (j<size1)
        {
            if(lib[i].book_title[j]==lib[i+1].book_title[j])
            j++;
            else
            break;    
        }
        if(j==size1)
        {
            printf("ACCESSION NUMBER : %d\n",lib[i].accession_number);
            printf("AUTHOR NAME : %s\n",lib[i].name_of_author);
            printf("BOOK TITLE : %s\n",lib[i].book_title);
            if(lib[i].flag==1)
            printf("BOOK IS ALREADY ISSUED\n");
            else
            {
                printf("BOOK IS ISSUED TO YOU \n");
                lib[i].flag=1;   
            }
        }
        }
    }
    return n--;
}
int main()
{
    int size;
    char str[100];
    printf("ENTER THE NUMBER OF BOOKS TO BE STORED IN LIBRARY\n");
    scanf("%d",&size);
    for(int i=1;i<=size;i++)
    {
        printf("ACCESSION NUMBER : ");
        scanf("%d",&lib[i].accession_number);
        printf("NAME OF AUTHOR : ");
        fflush(stdin);
        gets(lib[i].name_of_author);
        printf("BOOK TITLE : ");
        fflush(stdin);
        gets(lib[i].book_title);
        printf("IS BOOK ISSUED OR NOT IF YES SET 1 ELSE 0 : ");
        scanf("%d",&lib[i].flag);
    }
    printf("-----------------------------------------------------------------------\n");
    INFORMATION(size);
    printf("-----------------------------------------------------------------------\n");
    ADD_A_NEW_BOOK(size++);
    printf("-----------------------------------------------------------------------\n");
    SAME_AUTHOR(size);
    printf("-----------------------------------------------------------------------\n");
    SAME_TITLE(size);
    printf("-----------------------------------------------------------------------\n");
    printf("TOTAL NUMBER OF BOOKS IN THE LIBRARY : %d\n",size);
    printf("-----------------------------------------------------------------------\n");
    printf("ENTER THE BOOK TO BE ISSUED");
    printf("-----------------------------------------------------------------------\n");
    fflush(stdin);
    gets(str);
    size=ISSUE_BOOK(str,size);
    printf("-----------------------------------------------------------------------\n");
    printf("TOTAL NUMBER OF BOOKS IN THE LIBRARY : %d\n",size);
    printf("-----------------------------------------------------------------------\n");
}
