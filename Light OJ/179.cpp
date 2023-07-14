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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,s,d,p,dis[N],dis1[N],dis2[N],c,inf = 1e8,ans;
vector<pii> adj[N],rev[N];
bool visited[N];

void dijkstra(int s,vector<pii> grp[]){
    dis[s]=0;
    priority_queue<pii> q;
    q.push({0,s});
    while(!q.empty()){
        pii p = q.top();
        q.pop();
        int v=p.ss,w=-p.ff;
        if(dis[v]!=w) continue;

        for(auto it:grp[v]){
            if(dis[it.ff]>dis[v]+it.ss){
                dis[it.ff]=dis[v]+it.ss;
                q.push({-dis[it.ff],it.ff});
            }
        }
    }
}

void dfs( ){
    for(int i=1;i<=n;i++){
        for(auto it:adj[i]){
           // cout<<i<<" "<<it.ff<<" "<<it.ss<<" "<<dis1[i]<<" "<<dis2[it.ff]<<endl;
            if(dis1[i]+it.ss+dis2[it.ff]<=p){
                ans=max(ans,it.ss);
               // cout<<i<<" "<<it.ff<<" "<<ans<<endl;
            }
        }
    }
}

void clear_(){
    rep(i,n+1){
        adj[i].clear();
        rev[i].clear();
        dis[i]=inf;
        visited[i]=false;
        dis1[i]=0;
        dis2[i]=0;
    }
}

int main()
{
    w(t){
        scanf("%d%d%d%d%d",&n,&m,&s,&d,&p);
        clear_();
        rep(i,m-1){
            scanf("%d%d%d",&a,&b,&c);
            adj[a].pb({b,c});
            rev[b].pb({a,c});
        }
        ans=-1;
        dijkstra(s,adj);
        for(i=1;i<=n;i++){
            dis1[i]=dis[i];
            dis[i]=inf;
        }
        dijkstra(d,rev);
        for(i=1;i<=n;i++) {
            dis2[i]=dis[i];
            dis[i]=inf;
           // cout<<i<<" "<<dis2[i]<<endl;
        }
        dfs( );

        printf("Case %d: %d\n",++cs,ans);
    }
}

