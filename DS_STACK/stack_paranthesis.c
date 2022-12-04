#include<stdio.h>
int main()
{
    char S[100];
    char s[100];
    int i=0,j=0;
    printf("enter the string of paranthesis\n");
    scanf("%s",&S);
    while(S[i]!='\0')
    {
        if(S[i]=='('||S[i]=='{'||S[i]=='[')
        {
            s[j]=S[i];
            j++;
        }
        if(S[i]==')'||S[i]==']'||S[i]=='}')
        {
                if(S[i]==')'&&s[j-1]=='(')
                j--;
                if(S[i]==']'&&s[j-1]=='[')
                j--;
                if(S[i]=='}'&&s[j-1]=='{')
                j--;
        }
        i++;
    } 
    if(j==0)
    printf("the expression is balanced\n");
    else
    printf("not balanced");
}
