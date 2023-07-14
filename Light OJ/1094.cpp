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

const int N=40000;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,dis[N],dig[N],c,ans,x;
bool visited[N];
vector<pii> adj[N];

void bfs(int s){
    queue<int> q;
    visited[s]=1;
    q.push(s);
    ans=0,x=0;
    while(!q.empty()){
        int v=q.front();q.pop();
        if(dis[v]>ans){
            ans=dis[v];
            x=v;
        }
        for(auto it:adj[v]){
            if(!visited[it.ff]){
                visited[it.ff]=1;
                dis[it.ff]=dis[v]+it.ss;
                q.push(it.ff);
              //  cout<<it.ff<<" "<<dis[it.ff]<<endl;
            }
        }
    }
}

void clear_(){
    for(int i=0;i<N;i++){
        visited[i]=0;
        dis[i]=0;
        dig[i]=0;
       // adj[i].clear();
    }
}
int main()
{
    w(t){
        clear_();
        scanf("%d",&n);
        for(i=0;i<=n;i++) adj[i].clear();
        rep(i,n-2){
            cin>>a>>b>>c;
            adj[a].pb({b,c});
            adj[b].pb({a,c});
        }
        bfs(0);
        clear_();
     //   cout<<1<<" "<<x<<" "<<ans<<endl;
        bfs(x);
        printf("Case %d: %d\n",++cs,ans);
    }
}

