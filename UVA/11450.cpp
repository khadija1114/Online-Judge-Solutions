#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define bg begin()
#define en end()
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
int t,j,cs=0,n,a,b,i,m,c,ar[25][25],memo[201][25];

int dp(int amount,int store){
    if(amount<0) return -mod;
    if(store==c) return m-amount;
    if(memo[amount][store]!=-1) return memo[amount][store];

    int ans=-1;
    for(int i=1;i<=ar[store][0];i++)
        ans=max(ans,dp(amount-ar[store][i],store+1));

    memo[amount][store]=ans;
    return ans;
}

int main()
{
    w(t){
        cin>>m>>c;
        for(int i=0;i<c;i++){
            cin>>ar[i][0];
            for(int j=1;j<=ar[i][0];j++){
                cin>>ar[i][j];
            }
        }
        memset(memo,-1,sizeof(memo));
        int ans=dp(m,0);
        if(ans<0) printf("no solution\n");
        else printf("%d\n",ans);

    }
}

