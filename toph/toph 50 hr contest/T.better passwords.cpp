#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char a[20];
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<=n;i++)
    {
        if(i==0) printf("%c",a[i]-32);
        else if(i==n) printf(".");
        else if (a[i]=='s') printf("$");
        else if(a[i]=='i')  printf("!");
        else if (a[i]=='o') printf("()");
        else printf("%c",a[i]);
    }
    return 0;
}
