#include<bits/stdc++.h>
#define mod 1e9+9
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=200002;
int t,i,j,cs=0,n,a,b;
string s;
int main()
{
    w(t){
     map<int,int> mp;
     int same=0,sin=0,ans=0,maxx=0;
     bool bl[N]={};
     cin>>n;
     int ar[n];
     for(i=0;i<n;i++){
        cin>>ar[i];
        if(bl[ar[i]]){
            mp[ar[i]]++;
        }
        else{
            bl[ar[i]]=1;
        }
     }
     for(auto it=mp.begin();it!=mp.end();it++){
        same+=1+it->ss;
        maxx=max(it->ss,maxx);
     }
     maxx++;
     sin=n-same;
     if(n==1) ans=0;
     else if(sin>=same){
        ans=maxx;
     }
     else {
        a=mp.size();
        sin+=a-1;
        if(sin>=maxx){
            ans=maxx;
        }
        else{
            if(maxx-sin>1) sin++;
            ans=sin;
        }
     }
     cout<<ans<<endl;
    }

}


