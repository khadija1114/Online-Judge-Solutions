#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  t,a,b,n,res,m=10000001,res2,c;

    while(scanf("%lld%lld",&a,&c)!=EOF)
    {
        n=a%1000;
        while(a>10000)
        {
            a=a/100;
        }

        //cout<<(b>>1)<<endl;
        b=c;
        res=1; res2=1;
        while(b>0)
        {
            if(b&1) res=(res*n)%m;
            n=(n*n)%m;
            b>>=1;
        }
        while(c>0)
        {
            if(c&1) res2=(res2*a);
            a=(a*a);
            c>>=1;
        }
        while(res2>1000)
        {
            res2/=10;
        }

        cout<<res2<<"..."<<res%1000<<endl;

    }

}


