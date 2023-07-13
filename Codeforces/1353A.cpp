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
int t,i,j,cs=0,n,a,b,k;
string s;

int main()
{
    w(t){
        cin>>a>>b;
        long long  ans;
        if(a==1){
            cout<<0<<endl;
        }
        else if(a==2){
            cout<<b<<endl;
        }
        else if(a==3){
            cout<<2*b<<endl;
        }
        else {
            ans=2*(b/2)+2*(b/2);
            if(b&1) ans+=2;
            cout<<ans<<endl;

        }
    }
}


