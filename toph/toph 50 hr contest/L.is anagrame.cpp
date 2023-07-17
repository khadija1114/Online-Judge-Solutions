#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j,m=0;
    scanf("%s%s",a,b);
    if(strlen(a)==strlen(b))
    {
        for(i=0;i<strlen(a);i++)
        {
            for(j=0;j<strlen(a);j++)
            {
                if(a[i]==a[i])
                {
                    m++;
                    break;
                }
            }
        }
    }
    if(m==strlen(a)) printf("Yes\n");
    else printf("No\n");
    return 0;
}
