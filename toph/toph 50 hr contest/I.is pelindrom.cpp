#include<stdio.h>
#include<string.h>

int main()
{
    char c[100];
    scanf("%s",c);
    int i,j,m,n;
    n=strlen(c);
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        if(c[i]!=c[j])
        {
            printf("No\n");
            return 0;

        }
        else
        m=1;


    }
    if(m==1)
        printf("Yes\n");
}
