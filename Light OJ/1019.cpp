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

const int N=105;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,c,cost[N][N],dis[N],inf=1e9;
vi adj[N];

void dijsktra(int s){
    dis[s]=0;
    priority_queue<pii> q;
    q.push({0,s});
    while(!q.empty()){
        pii p = q.top(); q.pop();
        int w=-p.ff,v=p.ss;
        if(dis[v]!=w) continue;
        for(auto u:adj[v]){
            if(dis[u]>dis[v]+cost[u][v]){
                dis[u]=dis[v]+cost[u][v];
                q.push({-dis[u],u});
            }
        }
    }
}
void clear_(){
    rep(i,n+1){
        dis[i]=inf;
        adj[i].clear();
        rep(j,n+1) cost[i][j]=inf;
    }
}
int main()
{
    w(t){
        scanf("%d%d",&n,&m);
        clear_();
        rep(i,m-1){
            scanf("%d%d%d",&a,&b,&c);
            adj[a].pb(b);
            adj[b].pb(a);
            cost[a][b]=min(cost[a][b],c);
            cost[b][a]=min(c,cost[b][a]);
        }
        dijsktra(1);
        if(dis[n]<inf) printf("Case %d: %d\n",++cs,dis[n]);
        else printf("Case %d: Impossible\n",++cs);
    }
}

