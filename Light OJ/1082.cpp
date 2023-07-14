#include<bits/stdc++.h>
#define mod 1e9+9
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
const int N=100000;
int t,i,j,cs=0,n,sparse[N+1][21],l,r,q,k,ans;

int main()
{
    w(t){
        scanf("%d%d",&n,&q);
        for(i=0;i<n;i++){
            scanf("%d",&sparse[i][0]);
        }
        for(j=1;(1<<j)<n;j++){
            for(i=0;i+(1<<j)-1<n;i++)
                sparse[i][j]=min(sparse[i][j-1],sparse[i+(1<<(j-1))][j-1]);
        }
        printf("Case %d:\n",++cs);
        while(q--){
            scanf("%d%d",&l,&r);
            l--;r--;
            k=r-l+1;
            k=log2(k);
            ans=min(sparse[l][k],sparse[r-(1<<k)+1][k]);
            printf("%d\n",ans);
        }
    }
}

