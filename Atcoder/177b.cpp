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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    string s,t;
    cin>>s>>t;
    int n=s.size(),m=t.size();
    int cnt=0,mx=1000000;
    for(i=0;i+m-1<n;i++){
        cnt=0;
        for(j=0;j<m;j++){
            if(s[i+j]!=t[j]) cnt++;
        }
        mx=min(cnt,mx);
    }
    cout<<mx<<endl;
}

