#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long i,res,n,j;
int t,cs=0;
ll solve(ll n){
    for(i=1;i<=n;i*=2){
        if(n&i){
            res=i+n;
            break;
        }
    }
   // cout<<res<<endl;
    int need=__builtin_popcountll(n)-__builtin_popcountll(res);
    for(i=0;i<need;i++)
        res+=(1<<i);

    return res;
}
int main()
{
    scanf("%d",&t);
    while(t--){
         scanf("%lld",&n);
        printf("Case %d: %lld\n",++cs,solve(n));

    }
}
