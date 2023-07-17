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
int t,j,cs=0,n,a,b,m,k,i;
string s,c;

int main()
{
    cin>>n>>m>>k;
    int ar[n+1],br[m+1];
    for(i=0;i<n;i++)
        cin>>ar[i];
        ar[i]=1e9+2;
    for(i=0;i<m;i++)
        cin>>br[i];
    br[i]=1e9+2;
    int ans=0;
    ll cnt=0,cc=0;
    a=max(n,m);
    i=0;j=0;
    while(cnt<k && i<n && j<m){
        if(ar[i]<br[j]){
            cnt+=ar[i++];
            }

        else{
            cnt+=br[j++];
        }

        ans++;
        //cout<<ans<<endl;
    }

    if(j<m)
    {
        while(cnt<k && j<m){
        cnt+=br[j++];
        ans++;
        }
    }
    else if(i<n){
        while(cnt<k && i<n){
        cnt+=ar[i++];
        ans++;
        }
    }
   // cout<<cnt<<endl;
    if(cnt>k) ans--;
    cout<<ans<<endl;
}

