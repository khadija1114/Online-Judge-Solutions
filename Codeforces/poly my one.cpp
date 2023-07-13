#include<stdio.h>
#include<stdio.h>

int main()
{
    int n,i,m=1;

    scanf("%d",&n);
    char c[n];
    scanf("%s",c);
    for(i=0;i<n;i++)
    {
        if(c[i]=='x'&&c[i+1]=='x')
        {
            m++;
        }

    }
     if(m>=3)printf("%d",m-2);
     else printf("0\n");


}

