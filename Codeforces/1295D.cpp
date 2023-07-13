#include<bits/stdc++.h>
using namespace std;
int N=1e5;
int prime[100006],nprime=0;
bool mark[100006];
void sieve(){
    prime[nprime++]=2;
    int i,j;
    memset(mark,true,sizeof(mark));
    //for(i=2;i<=N;i+=2) mark[i]=false;
    for(i=3;i*i<=N;i+=2){
        if(mark[i]){
            prime[nprime++]=i;
            for(j=i*i;j<=N;j+=2*i){
                mark[j]=false;
            }
        }
    }
    for( ;i<=N;i+=2){
        if(mark[i])  prime[nprime++]=i;
    }

}
long long phi(long long n) {
    long long result = n;
    for (long long i = 0; prime[i] * prime[i] <= n&&i<nprime; i++) {
        if(n % prime[i] == 0) {
            while(n % prime[i] == 0)
                n /= prime[i];
            result -= result / prime[i];
        }
    }
    if(n > 1)
        result -= result / n;
    return result;
}

long long solve(long long n, long long m){
   // cout<<gcd(n,m)<<endl<<__gcd(n,m)<<endl;
    return phi(m/__gcd(n,m));

}
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,m,a,b,t,ans,i;
    sieve();
    cin>>t;
//    while(t--)
//    {
//        cin>>n;
//        cout<<phi(n)<<endl;
//    }
    while(t--){
        cin>>n>>m;
       ans = solve(n,m);
      //for(i=0;i<=n;i++) cout<<prime[i]<<endl;
       cout<<ans<<endl;
    }
}
