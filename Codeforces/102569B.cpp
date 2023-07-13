#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long int mod=1e9+9;
const int N=100000;
int t,i,j,cs=0,n,a,b,q;
string s;

int main()
{
    cin>>n>>q;
    long long a;
    vector<long long> v;
    for(i=0;i<n;i++){
        cin>>a;
        v.pb(a);
    }
    int mx=0,pos;
    vector<long long>:: iterator it;
    for(i=0;i<n;i++){
    it = lower_bound (v.begin(), v.end(), v[i]+q);
    pos=it-v.begin();
       mx=max(mx,pos-i);
    }
    cout<<mx<<endl;
}


