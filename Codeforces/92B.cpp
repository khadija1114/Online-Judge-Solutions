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
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
    cin>>s;
    n=s.size();

    bool one=false;
    int ans=0;
    i=n-1;
    while(s[i]=='0'){
        ans++;
        i--;
    }
    if(i==0){
        cout<<ans<<endl;
        return 0;
    }
    ans+=2;
    i--;
    while(i>=0){
        if(s[i]=='0') ans+=2;
        else ans++;
        i--;
    }
    cout<<ans<<endl;
}

