#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define bg begin()
#define en end()
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

const int N=1e4+2;
long long  mod=1e9+9,ans=1;
int t,j,cs=0,n,a,b,i,prime[N],k,cnt[N];
bool mark[N];
string s;

void sieve(){
    prime[k++]=2;
    for(i=3;i<N;i+=2){
        if(!mark[i]){
            prime[k++]=i;
            for(j=i;j<N;j+=2*i)
                mark[j]=true;
        }
    }
}
int main()
{
    sieve();
    for(i=0;i<10;i++){
        cin>>a;
        for(j=0;prime[j]*prime[j]<=a;j++){
            while(a%prime[j]==0){
                a/=prime[j];
                cnt[prime[j]]++;
            }
        }
        if(a>1) cnt[a]++;
    }
    for(i=2;i<N;i++)
        ans*=(cnt[i]+1);
    cout<<ans%10<<endl;
}

