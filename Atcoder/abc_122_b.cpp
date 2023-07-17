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
int t,i,j,cs=0,n,a,b;
string s;

int main()
{
    cin>>s;
    n=s.size();
    int ans[n+1]={};
    for(i=0;i<n;i++){
        if(s[i]=='A' || s[i]=='C' || s[i]=='T' || s[i]=='G'){
            ans[i+1]=ans[i]+1;
        }
        else
            ans[i+1]=0;
    }
    cout<<*max_element(ans,ans+n+1)<<endl;
}


