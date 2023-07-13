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

long long  mod=1e9+9;
const int N=1e7+2;
int t,i,j,cs=0,n,a,k,b;
string s;

int main()
{
    cin>>n>>k;
    int ar[n];
    ll cnt=0;
    vector<long long> v;
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=n-1;i>=0;i--){
        cnt+=ar[i];
        if(i>0)
            v.pb(cnt);
    }
    sort(v.begin(),v.end(),greater<long long> ());
   // reverse(v.begin(),v.end());
    k--;
    for(i=0; i<k;i++){
        cnt+=v[i];
    }
    cout<<cnt<<endl;

}
