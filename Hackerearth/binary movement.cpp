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
    cin>>n;
    int ar[n+1],cnt[n+1]={},ans=0;
    for(i=0;i<n;i++)
        cin>>ar[i+1];

    w(t){
        cin>>a>>b;
        cnt[a]++;
        if(b<n) cnt[b+1]--;
    }
  //  for(auto it:cnt) cout<<it<<" ";
    for(i=2;i<=n;i++){
        cnt[i]+=cnt[i-1];
    }

    for(i=1;i<=n;i++){
        if(cnt[i]&1){
            ar[i]=1-ar[i];
        }
        if(ar[i]) ans++;
    }
    cout<<ans<<endl;
    for(i=1;i<=n;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
}

