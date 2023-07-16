#include<bits/stdc++.h>
#define mod 1e9+9
#define make_pair mp
#define ff first
#define ss second
#define pb push_back
#define w(x) cin>>x;while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
ll ans,solve[47][2];
int t,i,j,cs=0,n;
string s;

ll dp(int pos,int clr){
    if(pos==n){
        if(clr==1) return 0;
        else return 1;
    }
    if(solve[pos][clr]!=-1) return solve[pos][clr];

    ll cnt=0;
    if(clr==0){
        cnt+=dp(pos+1,0);
        cnt+=dp(pos+1,1);
    }
    else{
        cnt+=dp(pos+1,0);
    }
    return solve[pos][clr]=cnt;

}
int main()
{
    ios
    scanf("%d",&n);
    memset(solve,-1,sizeof(solve));
    ans=2*dp(1,0);
    printf("%lld\n",ans);

}


