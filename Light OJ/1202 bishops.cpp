//wrong ans


#include<stdio.h>
#include<math.h>

int main()
{
    int r1,r2,c1,c2,t,i,ans;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&r1,&c1,&r2,&c2);

        if((r1%2==0&&c1%2==0)||(r1%2==1&&c1%2==1))
        {
            if((r2+c2)%2==1) ans=1;
            else if (fabs(r2-r1)==fabs(c2-c1)) ans=2;
            else ans=3;
        }
        else
        {
            if(r2+c2%2==0) ans =0;
            else if (fabs(r2-r1)==fabs(c2-c1)) ans=2;
             else ans=3;
        }


        if(ans==1) printf("Case %d: impossible\n;",i+1);
        else if(ans==2) printf("Case %d: 1\n",i+1);
        else printf("Case %d: 2\n",i+1);




    }


    return 0;
}
