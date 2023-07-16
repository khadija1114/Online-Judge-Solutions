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

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i;
string s;

void solve(){
    cin>>n;
    int ar[n];
    int ans=0;
    rep(i,n-1) cin>>ar[i];
    cin>>a;
    bool flag=false;

    for(i=0;i<(1<<n);i++){
        ans=0;
        for(j=0;j<n;j++){
            if(i&(1<<j)) ans+=ar[j];
        }
        if(ans==a){
            flag=true;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(flag==false)
        cout<<"NO"<<endl;
}
int main()
{
    w(t){
        solve();
    }
}


