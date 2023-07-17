#include<stdio.h>
int main()
{
    int a,b,count=0;
    scanf("%d%d",&a,&b);
    while(a>0&&b>0)
    {
        if(a%10+b%10>9)
        {
            count++;
            break;
        }
        else
            {
                a=a/10;
                b=b/10;
            }

    }
    if(count==0) printf("No\n");
    else printf("Yes\n");
    return 0;
}
