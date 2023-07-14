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

const int N=20002;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,dis[N];
vi adj[N];
bool visited[N];
string s;

int bfs(int a){
    int od=0,ev=0;
    queue<int>q;
    q.push(a);
    visited[a]=1;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        if(dis[v]&1) od++;
        else ev++;
        for(auto u:adj[v]){
            if(!visited[u]){
                visited[u]=1;
                dis[u]=dis[v]+1;
                q.push(u);
            }
        }
    }
    return max(od,ev);
}
int main()
{
    w(t){
        for(i=0;i<N;i++){
            adj[i].clear();
            visited[i]=0;
            dis[i]=0;
        }
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d%d",&a,&b);
            adj[a].pb(b);
            adj[b].pb(a);
        }
        int ans=0;
        for(a=1;a<=N;a++){
            if(adj[a].size() && !visited[a]){
                ans+=bfs(a);
            }
        }
        printf("Case %d: %d\n",++cs,ans);
    }
}

