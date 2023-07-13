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
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
ll j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},c,d,dyy[]={0,-1,1,0},k,m,x,y;
string s;

int main()
{
    int t;
    w(t){
        ll ans=1e18;
        cin>>c>>d>>x>>y>>m;
            a=c,b=d,n=m;
            k=a-x;
            if(k>n)a-=n,n=0;
            else a-=k,n-=k;
            if(n){
                k=b-y;
                if(k>n) b-=n;
                else b-=k,n-=k;
            }
            ans=min(ans,a*b);

            a=c,b=d,n=m;
            k=b-y;
            if(k>n) b-=n,n=0;
            else b-=k,n-=k;
            if(n){
                 k=a-x;
            if(k>n)a-=n;
            else a-=k,n-=k;
            }
            ans=min(ans,a*b);

            cout<<ans<<endl;

    }
}
