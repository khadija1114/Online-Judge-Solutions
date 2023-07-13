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

const int N=1e9+10;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    w(t){
       cin>>n;
       if(n==2){
        cout<<2<<endl<<1<<" "<<2<<endl;
        continue;
       }
       bool ar[n+1]={};
       vector<pii> v;
       int a=n,b=n-2;
       ar[a]=1;ar[b]=1;
       v.pb({a,b});
       a=(a+b)/2;
       v.pb({a,a});
       ar[a]=1;
       b=n-3;
       for(i=0;i<n-3;i++){
        v.pb({a,b});
        a=(a+b)/2;
        b=b-1;
       }
       cout<<2<<endl;
       for(auto it:v)
        cout<<it.ff<<" "<<it.ss<<endl;
    }
}



