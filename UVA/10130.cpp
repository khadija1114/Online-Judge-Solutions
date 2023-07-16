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
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,val[N],w[N],q;
string s;

int dp(int state,int rem){
    if(state==n || rem==0) return 0;
    if(w[state]>rem) return dp(state+1,rem);
    return max(dp(state+1,rem),val[state]+dp(state+1,rem-w[state]));
}
int main()
{
    w(t){
        cin>>n;
        for(i=0;i<n;i++)
            cin>>val[i]>>w[i];
        int sum=0;
        w(q){
            cin>>a;
            sum+=dp(0,a);
        }
        cout<<sum<<endl;
    }
}

