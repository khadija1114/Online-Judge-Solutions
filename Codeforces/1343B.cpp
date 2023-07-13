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

const int N=100000;
int t,i,j,cs=0,n,a,b;
string s;
int main()
{
    w(t){
        cin>>n;
        vi v;
        if((n/2)&1){
            cout<<"NO"<<endl;
        }
        else {
        a=1;b=2;
        for(i=0;i<n/2;i++){
            v.pb(b);
            b+=2;
        }
        for(i=0;i<(n/2)/2;i++){
            v.pb(v[i]-1);
        }
        for( ;i<(n/2);i++){
            v.pb(v[i]+1);
        }
        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
            cout<<v[i]<<" ";
            cout<<endl;
        }
    }
}


