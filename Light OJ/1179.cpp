#include<stdio.h>
int main()
{
    int i,t,n;
    unsigned k,j,res;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%u",&n,&k);
        res=0;

        for(j=2;j<=n;j++)
        {
            res=(res+k)%j;
         //   cout<<res<<" ";
        }
       // cout<<endl;
        printf("Case %d: %u\n",i,res+1);
    }
}

