#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long int mod=1e9+9;
const int N=100000;
int t,i,j,cs=0,n,a,b;
string s;

int main()
{
    w(t){
        cin>>s;
        int cnt0=0,cnt1=0;
        for(auto &it: s){
            cnt0+=(it=='0');
            cnt1+=(it=='1');
        }
        int ans=min(cnt1,cnt0);
        int pre0=0,suf0=0,pre1=0,suf1=0;
        for(auto &it:s){
            pre0+=(it=='0'); suf0=cnt0-pre0;
            pre1+=(it=='1'); suf1=cnt1-pre1;

            ans=min(ans,pre0+suf1);
            ans=min(ans,pre1+suf0);
        }
        cout<<ans<<"\n";
    }
}


