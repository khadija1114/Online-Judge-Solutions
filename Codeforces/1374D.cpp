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

const int N=1e6+2;
long long  mod=1e9+9,k;
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
  w(t){
    cin>>n>>k;
    int ar[n];
    ll x=0,a;
    vector<ll> v;
    for(i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]%k==0) ar[i]=0;
       else ar[i]=k-(ar[i]%k);
    }
    map<int,long long > map_;
    sort(ar,ar+n);
   for(auto it: ar){
        if(it!=0)
     map_[it]++;
   }
    for(auto it: map_){
        a=it.ff;
        if(it.ss>1)
        a+=(it.ss-1)*k;
        x=max(x,a);
    }
   if(x!=0)
     cout<<x+1<<endl;
    else
        cout<<0<<endl;
  }
}


