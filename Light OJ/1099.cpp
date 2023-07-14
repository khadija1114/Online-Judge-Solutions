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

const int N=5005;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,dis[N][2],c,inf=1e9;
vector<pii> adj[N];
bool visited[N][2];
string s;

void dijkstra(int s){
   // visited[s][0]=1;
    priority_queue<pair<int,pii>> q;
    q.push({0,{s,0}});
    dis[s][0]=0;
    while(!q.empty()){
        pair<int,pii> p;
        p=q.top();
        int w=-p.ff,v=p.ss.ff,tp=p.ss.ss;
        q.pop();
        if(visited[v][tp]) continue;

        visited[v][tp]=1;

       // cout<<v<<" "<<dis[v][0]<<" "<<tp<<" "<<w<<endl;
        for(auto it:adj[v]){
            int u=it.ff,ww=it.ss;
            if(dis[u][0]>w+ww){
                dis[u][1]=dis[u][0];
                dis[u][0]=w+ww;
                q.push({-dis[u][0],{u,0}});
                q.push({-dis[u][1],{u,1}});

              //  cout<<11<<" "<<u<<" "<<dis[u][0]<<" "<<dis[u][1]<<" "<<endl;

            }
            else if(dis[u][0]!=w+ww && dis[u][1]>w+ww){
                dis[u][1]=w+ww;
                q.push({-dis[u][1],{u,1}});
             //   cout<<12<<" "<<u<<" "<<dis[u][1]<<endl;
            }
        }
    }
}
void clear_(){
    rep(i,n+1){
        visited[i][0]=visited[i][1]=0;
        dis[i][0]=dis[i][1]=inf;
        adj[i].clear();
    }
}
int main()
{
    w(t){
        scanf("%d%d",&n,&m);
        clear_();
        while(m--){
            scanf("%d%d%d",&a,&b,&c);
            adj[a].pb({b,c});
            adj[b].pb({a,c});
        }
        dijkstra(1);
        printf("Case %d: %d\n",++cs,dis[n][1]);
    }
}

