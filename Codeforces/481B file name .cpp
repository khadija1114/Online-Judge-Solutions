#include<stdio.h>
#include<stdio.h>

int main()
{
    int n,i,m=0;

    scanf("%d",&n);
    char c[101];
    scanf("%s",c);

    for(i=1;i<n;i++)
    {
        if(c[i]=='x'&&c[i+1]=='x'&&c[i-1]=='x')
        {
            m++;
        }

    }
    printf("%d",m);


}
