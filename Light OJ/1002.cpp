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

const int N=505;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,inf=1e9,cost[N][N],dis[N],c;
vi adj[N];

void dijsktra(int s){
    dis[s]=0;
    priority_queue<pair<int,int>> q;
    q.push({0,s});
    while(!q.empty()){
        pii p=q.top(); q.pop();
        int v=p.ss,w=-p.ff;
     //   cout<<v<<" "<<w<<" "<<dis[v]<<endl;
        if(dis[v]!=w) continue;
        for(auto u:adj[v]){
            int mx=max(dis[v],cost[v][u]);
            if(dis[u]>mx){
                dis[u]=mx;
                q.push({-mx,u});
            }
        }
    }
}
void clear_(){
    rep(i,n+1){
        adj[i].clear();
        dis[i]=inf;
        rep(j,n+1)
            cost[i][j]=inf;
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
            cost[a][b]=min(c,cost[a][b]);
            cost[b][a]=min(c,cost[b][a]);
        }
        scanf("%d",&a);
        dijsktra(a);
        printf("Case %d:\n",++cs);
        rep(i,n-1){
            if(dis[i]<inf) printf("%d\n",dis[i]);
            else printf("Impossible\n");
        }
    }
}

