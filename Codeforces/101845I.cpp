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
const int N=1e6+2;
int t,j,cs=0,n,mm;
long long a ,k,ans,i;


int main()
{
    cin>>n;
    w(t){
        vector<bool> s(n),ch;
        cin>>a>>k;
        ans=0,i=0;
      //  int cnt=__builtin_clzll(a);
        while(a){
            s[i]=(a&1);
            a/=2;
            i++;
        }
        reverse(s.begin(),s.end());
       // for(auto it:s)
      //      cout<<it;
     //   cout<<endl;
        k=k%n;
        k=n-k;
        for(i=n-k;i<n;i++)
            ch.pb(s[i]);
        for(i=0;i<n-k;i++)
            ch.pb(s[i]);
//        for(auto it: ch)
//            cout<<it;
//        cout<<endl;
        reverse(ch.begin(),ch.end());
        for(i=0;i<n;i++)
            if(ch[i])
                ans+=(1LL<<i);
        cout<<ans<<endl;
    }
}

