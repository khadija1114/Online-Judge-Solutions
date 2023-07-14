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
const int N=20;
int t,i,j,cs=0,n,a,b;
string s;

int main()
{
    w(t){
        int ar[22][3]={},ans[25][3]={};
        scanf("%d",&n);
        rep(i,1,n){
            scanf("%d%d%d",&ar[i][0],&ar[i][1],&ar[i][2]);
        }
        ans[1][0]=ar[1][0],ans[1][1]=ar[1][1],ans[1][2]=ar[1][2];
        for(i=2;i<=n;i++){
            ans[i][0]=ar[i][0]+min(ans[i-1][1],ans[i-1][2]);
            ans[i][1]=ar[i][1]+min(ans[i-1][0],ans[i-1][2]);
            ans[i][2]=ar[i][2]+min(ans[i-1][0],ans[i-1][1]);
        }
       // cout<<ans[n][0]<<" "<<ans[n][1]<<" "<<ans[n][2]<<endl;
       a=min(ans[n][0],ans[n][1]);
       a=min(a,ans[n][2]);
       printf("Case %d: %d\n",++cs,a);
    }
}


