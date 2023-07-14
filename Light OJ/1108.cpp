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

const int N=1005;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,dis[N],c,inf=100000;
bool visited[N];
vi adj[N],v;

class node{
public:
    int u,v,w;
    node(){}
    node(int a,int b,int c){
        u=a;
        v=b;
        w=c;
    }
};

vector<node> edge;

void clear_(){
    rep(i,n+1){
        adj[i].clear();
        dis[i]=inf;
        visited[i]=0;
    }
    edge.clear();
    v.clear();
}

void dfs(int s){
    visited[s]=1;
    v.pb(s);
    for(auto it:adj[s]) {
        if(!visited[it])
            dfs(it);
    }
    return ;
}

bool belmanford(){
    for(int i=1;i<n;i++){
        for(auto it:edge){
            if(dis[it.u]+it.w<dis[it.v])
                dis[it.v]=dis[it.u]+it.w;
        }
    }
    bool ans=false;
    for(auto it:edge){
        if(dis[it.u]+it.w<dis[it.v]){
            dis[it.v]=dis[it.u]+it.w;
            ans=true;
            if(!visited[it.u])
                dfs(it.u);
        }
    }
    return ans;
}


//if the cost of a node v decreases for an edge(u, v) during the nth
//iteration we can not say for sure that it is part of a negative cycle.
//Because the cost in nth iteration decreases if it is within a negative
//cycle or it is reachable from a negative cycle. We only want the nodes
//which are within a negative cycle. How can we do this? By running Bellman
//Ford in the transpose graph of G.



int main()
{
    w(t){
        scanf("%d%d",&n,&m);
        clear_();
        rep(i,m-1){
            scanf("%d%d%d",&a,&b,&c);
            edge.pb(node(b,a,c));
            adj[b].pb(a);
        }
        printf("Case %d:",++cs);
        if(belmanford()){
            sort(v.bg,v.en);
            for(auto it:v) printf(" %d",it);
            printf("\n");
        }
        else printf(" impossible\n");
    }
}

