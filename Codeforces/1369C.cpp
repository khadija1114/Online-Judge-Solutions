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
int t,j,cs=0,n,k,a,b,i;
string s;

int main()
{
    w(t){
        cin>>n>>k;
        ll ar[n],ans=0;
        int br[k];
        for(i=0;i<n;i++)
            cin>>ar[i];
        for(i=0;i<k;i++)
            cin>>br[i];
        sort(ar,ar+n);
     //   for(auto it:ar)
          //  cout<<it<<" ";
        sort(br,br+k);
        int st=0,en=n-1;
        i=0;
        while(br[i]==1 && i<k){
            ans+=(2*ar[en]);
            en--;
            i++;
        }
        for(j=k-1;j>=i;j--){
            a=br[j];
            ans+=ar[en]+ar[st];
            // cout<<a<<" "<<ar[en]<<" "<<ar[st]<<endl;;
            en--;
            st+=a-1;
        }
        cout<<ans<<endl;
    }
}


