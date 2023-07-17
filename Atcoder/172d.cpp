#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=1e7+2;
long long  mod=1e9+9,i;
int t,j,cs=0,n,a,b;
string s;
bool mark[N];
int   prime[N];

bool seive(){
    a=10000;
    prime[1]=0;
    for(i=1;i<a;i++){
             for(j=i;j<N;j+=i){
                prime[j]++;
            }
    }
    for(i=1;i<N;i++){
        if(prime[i]==1) prime[i]++;
    }
}
int main()
{
    seive();
   unsigned long long ans=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       ans+=i*(prime[i]);
//        //
//        //cout<<i<<" "<<prime[i]<<endl;
//    }
    printf("%lld\n",ans);
}


