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
    vi ar(n),v(n);
    rep(i,n-1) cin>>ar[i];

    map<int,int> mp;
    mp[ar[0]]=1;
    v[0]=1;
    int ans=0;

    for(i=1;i<n;i++){
        if(mp[ar[i]]){
            v[i]=min(i+1-mp[ar[i]],v[i-1]+1);
            mp[ar[i]]=i+1;
        }
        else{
            v[i]=v[i-1]+1;
            mp[ar[i]]=i+1;
        }
    //    cout<<i<<" "<<v[i]<<endl;
    }
    for(auto it:v)
       ans=max(ans,it);
    cout<<ans<<endl;
}



