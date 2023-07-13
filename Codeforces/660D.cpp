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

const int N=1e6+2;
long long  mod=1e9+9,a,b;
int t,j,cs=0,n,i;
string s;

int main()
{
    cin>>n;
    int x[n],y[n];
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    map<pair<ll,ll>,int> cnt;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            a=x[i]+x[j];
            b=y[i]+y[j];
            cnt[mp(a,b)]++;
        }
    }
    long long ans=0;
    for(auto it: cnt){
        ans+=it.ss*(it.ss-1)/2;
    }
    cout<<ans<<endl;
}

