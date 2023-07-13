#include<stdio.h>
int main()
{
    int n,i,m,x=0;
    char a[3];
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        m=0;
        scanf("%s",a);
        if(a[0]=='1') m++;
        if(a[1]=='1') m++;
        if(a[2]=='1') m++;
        if(m>1) x++;

    }
    printf("%d",x);
}
