#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b&&a>c&&a>d)
    {
       printf("%d %d %d\n",a-b,a-c,a-d);
    }
    if(b>a&&b>c&&b>d)
    {
       printf("%d %d %d\n",b-a,b-c,b-d);
    }
    if(c>b&&c>a&&c>d)
    {
       printf("%d %d %d\n",c-b,c-a,c-d);
    }
    if(d>b&&d>c&&d>a)
    {
       printf("%d %d %d\n",d-b,d-c,d-a);
    }
    return 0;
}
