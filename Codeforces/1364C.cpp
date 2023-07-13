#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=1;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long  mod=1e9+9;
const int N=1e6+2;
int t,j,cs=0,n,a,b,i,ar[N],br[N+1];
bool used[N];
string s;

int main()
{
        cin>>n;
        for(i=0;i<=n;i++)
            br[i]=-1;
        rep(i,n)
            cin>>ar[i];
        rep(i,n){
            if(ar[i]!=ar[i-1]){
                br[i]=ar[i-1];
                used[br[i]]=1;
            }
        }
        used[ar[n]]=1;
        j=0;
        rep(i,n){
            while(used[j])
                j++;
            if(br[i]==-1){
                br[i]=j;
                used[j]=1;
            }
        }
        rep(i,n){
            cout<<br[i]<<" ";
        }
        cout<<endl;
}

