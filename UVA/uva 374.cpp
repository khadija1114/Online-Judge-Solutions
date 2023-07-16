#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  t,a,b,m,n,res;

    while(scanf("%lld%lld%lld",&a,&b,&m)!=EOF)
    {
        //cout<<(b>>1)<<endl;
        res=1;
        while(b>0)
        {
            if(b&1) res=(res*a)%m;
            a=(a*a)%m;
            b>>=1;
        }

        cout<<res<<endl;

    }

}

