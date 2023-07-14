#include<stdio.h>

int onecount(long long int N)
{
    int count=0;
    long long int i=1;
    for( i=1;i<=N;i=i*2)
    {
        if((N&(i))!=0)
        {
            count++;
        }
    }

    return count;
}


long long int rslt(long long int num)
{
   long long res,t;
    for(t = 1; t<=num; t*=2) {
            if((num&(t))!=0) {
                    res = num+t;
                    break;

                    }

            }
        int needone=onecount(num)-onecount(res);
        int i;
        for(i=0;i<needone;i++)
        {
            res=res+(1<<i);
        }
        return res;


}

int main()
{
    int n,t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        printf("Case %d: %lld\n",i+1,rslt(n));
    }


    return 0;
}







