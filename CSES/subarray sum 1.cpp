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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,x;
string s;

int main()
{
    cin>>n>>x;
    vi ar(n);
    ll sum=0,ans=0;
    rep(i,n-1) cin>>ar[i];

    for( i=0,j=0 ; j<n ; ){
//        cout<<i<<" "<<j<<" "<<sum<<" "<<ans<<endl;
         while(sum<=x && j<n){
            sum+=ar[j++];
            if(sum==x)
                ans++;
         }
         cout<<i<<" "<<j<<" "<<sum<<" "<<ans<<endl;
         while(sum>=x && i<j){
            sum-=ar[i++];
            if(sum==x) ans++;
         }
        cout<<i<<" "<<j<<" "<<sum<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
}



