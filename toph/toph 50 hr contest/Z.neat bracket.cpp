#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,x=0,y=0;
    char a[30];
    scanf("%s",a);
    n=strlen(a);
    if(n%2==1||a[0]==')'||a[n-1]=='(')
    {
        printf("No\n");
        return 0;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]=='(') x++;
            else y++;
        }
    }
    if(x==y) printf("Yes\n");
    else printf("No\n");
    return 0;
}
