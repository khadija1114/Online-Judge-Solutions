#include<stdio.h>
#include<math.h>
int main()
{
    int r1,r2,c1,c2,t,i,a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
        a=fabs(r1-r2);
        b=fabs(c1-c2);

        printf("Case %d: ",i+1);

        if(a==b) printf("1\n");
        else if(a%2==b%2) printf("2\n");
        else printf("impossible\n");

    }
    return 0;
}
