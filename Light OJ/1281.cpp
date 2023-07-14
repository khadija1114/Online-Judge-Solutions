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

const int N=10009;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,c,i,k,m,dis[N][15],inf=1e9,d,ans;

class node{
    public:
    int type,weight,vertex;
    node(){}
    node(int a,int b,int c){
        type=a;
        weight=b;
        vertex=c;
    }
};

class cmp{
    public:
    bool operator()(node a, node b){
        return a.weight>b.weight;
    }
};

vector<node> adj[N];
int dijkstra(){
    priority_queue<node,vector<node> ,cmp> q;
    q.push(node(0,0,0));
    dis[0][0]=0;
    while(!q.empty()){
        node p=q.top();
        int tp=p.type,w=p.weight,v=p.vertex;
        q.pop();
       // cout<<v<<" "<<w<<" "<<tp<<endl;
        if(v==n-1) break;
        for(auto it:adj[v]){
            int u=it.vertex,ww=it.weight,id=it.type;
            //ww=(1^ww);
            if(id+tp>d) continue;

            if(dis[u][id+tp]>dis[v][tp]+ww){
                dis[u][id+tp]=dis[v][tp]+ww;
                q.push(node(id+tp,dis[u][id+tp],u));
            }
        }
    }
    int ans=inf;
    for(i=0;i<=d;i++){
        ans=min(ans,dis[n-1][i]);
    }
    return ans;
}

void clear_(){
    for(i=0;i<n+2;i++){
        adj[i].clear();
        rep(j,12) dis[i][j]=inf;
    }
}
int main()
{
    w(t){
        scanf("%d%d%d%d",&n,&m,&k,&d);
        clear_();
        rep(i,m-1){
            scanf("%d%d%d",&a,&b,&c);
            adj[a].pb(node(0,c,b));
        }
        rep(i,k-1){
            scanf("%d%d%d",&a,&b,&c);
            adj[a].pb(node(1,c,b));
        }
        ans=dijkstra();
        if(ans==inf) printf("Case %d: Impossible\n",++cs);
        else printf("Case %d: %d\n",++cs,ans);
    }
}

