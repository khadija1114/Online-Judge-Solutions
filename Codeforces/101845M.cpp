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

long long  mod=1e9+9,i=50;
const int N=1e6+2;
int t,j,cs=0,n,a,b,m,k,r;
double d=0;
string s;

int main()
{
    cin>>r>>b>>k;
    if(k>b){
        d=b*1.0/k;
    }
    else{
        d+=k-1;
        d+=(b-k+1)*1.0/(b-k+1+r);
        d/=k;
    }
    cout<<fixed<<setprecision(10)<<d<<endl;
}

