#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        if(b>=a)
            printf("Case %d: %d\n",i+1,b*4+19);
        else
            printf("Case %d: %d\n",i+1,(a-b)*4+a*4+19);

    }


    return 0;
}
