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

const int N=300005;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dis[N],ans,m,k;
bool visited[N],road[N];
map<pair<int,int>,int> map_;
vector<int> adj[N];
queue<int> q;

void mark(int a,int b){
    if(a>b) swap(a,b);
    road[map_[mp(a,b)]]=true;
}

void bfs(){
    while(!q.empty()){
        int v=q.front(); q.pop();
        for(auto u: adj[v]){
            if(visited[u]) continue;
            if(dis[v]<k){
                dis[u]=dis[v]+1;
                visited[u]=true;
                mark(u,v);
                ans--;
                q.push(u);
            }
        }
    }
}
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    ans=n-1;
    for(i=0;i<m;i++){
        scanf("%d",&a);
        visited[a]=true;
        q.push(a);
    }
    int u,v;
    for(i=0;i<n-1;i++){
        scanf("%d%d",&u,&v);
        if(u>v) swap(u,v);
        adj[u].pb(v);
        adj[v].pb(u);
        map_[mp(u,v)]=i+1;;
    }
    bfs();
    printf("%d\n",ans);
    for(i=1;i<n;i++){
        if(!road[i])
            printf("%d ",i);
    }
    printf("\n");
}

