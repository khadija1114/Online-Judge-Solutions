#include<bits/stdc++.h>
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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    ll x,y,ans;
    w(t){
        cin>>x>>y;
        if(x<y){
            if(y&1){
                y*=y;
                ans=y-x+1;
            }
            else {
                y=(y-1)*(y-1)+1;
                ans=y+x-1;
            }

        }
        else{
            if(x&1){
                x=(x-1)*(x-1)+1;
                ans=x+y-1;
            }
            else{
                x*=x;
                ans=x-y+1;
            }
        }
        cout<<ans<<endl;
    }
}



