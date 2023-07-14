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
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=10005;
long long  mod=1e9+9;
int t,j,cs=0,ans,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
vi adj[N],topsort  ;
bool vis[N],flag;

void allclear()
{
    rep(i,n+1){
        adj[i].clear();
        vis[i]=0;
    }
    ans=0;
    flag=1;
    topsort.clear();
}

void dfs(int s)
{
    vis[s]=1;
    for(auto it:adj[s]){
        if(!vis[it])
            dfs(it);
    }
    if(flag) topsort.pb(s);
    return ;
}

int main()
{
    w(t){
        scanf("%d",&n);
        allclear();
        w(m){
            scanf("%d%d",&a,&b);
            adj[a].pb(b);
        }
        for(i=1;i<=n;i++){
            if(!vis[i]){
                dfs(i);
            }
        }
        rep(i,n+1) vis[i]=0;
        flag=0;
        reverse(topsort.bg,topsort.en);
        for(auto it:topsort){
            if(!vis[it]){
                dfs(it);
                ans++;
            }
        }
        printf("Case %d: %d\n",++cs,ans);
    }
}

