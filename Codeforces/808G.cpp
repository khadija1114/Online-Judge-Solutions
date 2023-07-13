#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
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
int t,i,j,cs=0,n,a,b,m;
string s,s1,s2;

int prefix_function(string s){
    n=s.size();
    vi lsp(n);
    int index=0;
    for(i=1;i<n; ){
        if(s[i]==s[index]||(index!=m && s[i]=='?')){
            index++;
            lsp[i]=index;
            i++;
        }
        else{
            if(index!=0){
                index=lsp[index-1];
            }
            else{
                lsp[i]=0;
                i++;
            }
        }
    }
    a=lsp[m-1];
    if(a>m/2) a=m/2;
    int cnt=0;
    for(i=m;i<n;i++){
        if(lsp[i]>=m){
            cnt++;
            i+=m-a-1;
        }
    }
    return cnt;
}
int main()
{
    cin>>s1>>s2;
    m=s2.size();
    s=s2+'#'+s1;
    int ans=prefix_function(s);
    cout<<ans<<endl;
}

