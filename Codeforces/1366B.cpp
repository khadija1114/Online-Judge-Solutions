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

long long  mod=1e9+9;
const int N=1e6+2;
int t,i,j,cs=0,a,b;
ll n,x,m,ans=0;
string s;

int main()
{
    w(t){
        cin>>n>>x>>m;
      //  vector<pair<int,int>> v;
        int mn=x,mx=x;
        for(i=0;i<m;i++){
            cin>>a>>b;
           // v.pb(mp(a,b));
            if(x>=a && x<=b ){
              //  cout<<1<<" "<<x<<" "<<mn<<" "<<mx<<endl;
                mn=min(mn,a);
                mx=max(mx,b);

            }
            else if( mn>=a && mn<=b){
                 mn=min(mn,a);
                mx=max(mx,b);
            }
            else if(mx>=a && mx<=b){
                 mn=min(mn,a);
                mx=max(mx,b);
            }
        }
        cout<<mx-mn+1<<endl;
    }
}


