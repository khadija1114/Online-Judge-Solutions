#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long int mod=1e9+9;
const int N=1000005;
int t,i,j,cs=0,n,a,b;
string s;
int sieve[N+2];

void prime(){
    for(i=1;i<N;i+=2)
        sieve[i]=i;
        int m=sqrt(N);
    for(i=3;i<m;i++){
        if(sieve[i]==i){
            for(j=i;j<N;j+=2*i)
                if(sieve[j]==j)
                    sieve[j]=i;
        }
    }
}

int main()
{
    prime();
    w(t){
        long long n,k;

        scanf("%lld%lld",&n,&k);
        if(n&1){
            n+=sieve[n];
            k--;
        }



        n+=2*k;

       printf("%lld\n",n);
    }
}


