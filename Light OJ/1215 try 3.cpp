#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,l,d,m,g,c;
    int t,cs=0;
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld%lld",&a,&b,&l);
        m=(a/__gcd(a,b))*b;
        if(l%m!=0){
            printf("Case %d: impossible\n",++cs);
            continue;
        }
        c=l/m;
        d=__gcd(c,m);
        while(d!=1){
            c*=d;
            m/=d;
            d=__gcd(c,m);
        }
        printf("Case %d: %lld\n",++cs,c);
    }
}
