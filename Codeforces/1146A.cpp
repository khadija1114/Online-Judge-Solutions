#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i,n,m=0,ans;
    gets(s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='a') m++;
    }

    if(m<=n-m) ans=2*m-1;
    else ans=n;

    printf("%d\n",ans);

    return 0;



}
