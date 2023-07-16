#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long  mod=1e9+9;
const int N=1e6+2;
int t,i,j,cs=0,n,a,q,b;
string s;

int main()
{
   cin>>n>>q;
   int pre[n+1]={};
    rep(i,n-1){
        cin>>a;
        if(a&(a<<1))
            pre[i+1]++;
          //  cout<<pre[i+1]<<" ";
    }
    for(i=1;i<=n;i++){
        pre[i]+=pre[i-1];
    }
    while(q--){
        cin>>a>>b;

        cout<<pre[b]-pre[a-1]<<endl;
    }
}

