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
    cin>>n;
    ll sum=n*(n+1)/2;
    if(sum&1) cout<<"NO"<<endl;
    else{
        ll mx1=0,mx2=0;
        vi v1,v2;
        for(i=n;i>0;i--){
            if(mx1<mx2){
                v1.pb(i);
                mx1+=i;
            }
            else{
                mx2+=i;
                v2.pb(i);
            }
        }
        reverse(v1.bg,v1.en);
        reverse(v2.bg,v2.en);
        cout<<"YES"<<endl<<v1.size()<<endl;
        for(auto it:v1) cout<<it<<" ";
        cout<<endl<<v2.size()<<endl;
        for(auto it:v2) cout<<it<<" ";
        cout<<endl;
    }
}



