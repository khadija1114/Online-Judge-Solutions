#include<bits/stdc++.h>
using namespace std;
#define ma 32000
#define ll long long

vector<int> prime;


void seive(){
    bool isprime[40000];
    int i,j;
    prime.push_back(2);
    for(i=3;i<ma;i+=2){
        if(!isprime[i]){
            prime.push_back(i);
            for( j=i ; j<ma ; j+=2*i)
                isprime[j]=1;
        }
    }

}

void print(ll l, ll r){
    ll i,j;
    ll n=r-l+1;
    bool isprime[n+5];
    for( i=0 ; i<n ; i++) isprime[i]=true;
    if(l==1) isprime[0]=false;
    for(i=0 ; prime[i]*prime[i]<=r ; i++){
        ll base = (l/prime[i])*prime[i];
        if(base<l) base += prime[i];
        for( j=base ; j<=r ; j+=prime[i]){
            isprime[j-l]=false;
          // cout<<j-l<<" "<<prime[i]<<endl;
        }
        if(base=prime[i]) isprime[base-l]= true;
    }
     for(i=l ; i<=r ; i++){
             if(isprime[i-l])
            printf("%lld\n",i);
        }

}

int main()
{
    int t;
    ll n,m;
    scanf("%d",&t);
     seive();
     vector<int>:: iterator it;
     it = prime.end()-1;
     cout<<*it;
    while(t--){
        scanf("%lld%lld",&n,&m);
        print(n,m);
        //for(i=n;i<=m;i++) printf("%d ",prime[i]);
    }

    return 0;

}
