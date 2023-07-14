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

const int N=1e4+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,low[N],st[N],timer;
bool vis[N];
vi adj[N];
vector<pii> bridge;

void allclear()
{
    rep(i,n+1){
        vis[i]=0;
        adj[i].clear();
    }
    bridge.clear();
    timer=1;
}

void dfs(int s,int p=-1)
{
    vis[s]=1;
    st[s]=low[s]=timer++;
    for(auto it:adj[s]){
        if(it==p)
            continue;
        if(vis[it])
            low[s]=min(low[s],low[it]);
        else{
            dfs(it,s);
            low[s]=min(low[s],low[it]);
            if(low[it]>st[s]){
                if(it>s) bridge.pb({s,it});
                else bridge.pb({it,s});
            }
        }
    }
    return ;
}

int main()
{
    w(t){
        scanf(" %d",&n);
        allclear();
        for(i=0;i<n;i++){
            scanf("%d (%d)",&a,&m);
            while(m--){
                scanf("%d",&b);
                adj[a].pb(b);
            }
        }
        for(i=0;i<n;i++){
            if(!vis[i])
                dfs(i);
        }
        printf("Case %d:\n",++cs);
        printf("%d critical links\n",bridge.size());
        sort(bridge.bg,bridge.en);
        for(auto it:bridge){
            printf("%d - %d\n",it.ff,it.ss);
        }
    }
}


