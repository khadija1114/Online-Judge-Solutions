#include<stdio.h>
int main()
{
    int a,b,i,t,ans;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        ans=((b-1)/3)*2+(b-1)%3-((a-2)/3)*2-(a-2)%3;
        if (a==1) ans=ans-1;

        printf("Case %d: %d\n",i+1,ans);

    }
    return 0;

}
