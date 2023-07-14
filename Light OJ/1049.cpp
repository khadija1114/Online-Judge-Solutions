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

const int N=105;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,w[N][N],c;
bool visited[N];
vi adj[N];
string s;
int dfs(){
    int u,v=1,r=0,l=0;
    visited[1]=1;
    while(1){
        u=0;
        for(auto it:adj[v]){
            if(!visited[it]){
                visited[it]=1;
                u=it;
                break;
            }
        }
     //   cout<<v<<" "<<u<<" "<<r<<" "<<l<<endl;
        if(u==0) break;
        r+=w[v][u];
        l+=w[u][v];
        v=u;
    }
    r+=w[v][1];
    l+=w[1][v];
    return min(r,l);
}
int main()
{
    w(t){
        scanf("%d",&n);
        for(i=0;i<=n;i++){
            adj[i].clear();
            visited[i]=0;
        }
        memset(w,0,sizeof w);
        rep(i,n-1){
            scanf("%d%d%d",&a,&b,&c);
            adj[a].pb(b);
            adj[b].pb(a);
            w[a][b]=0;
            w[b][a]=c;
        }
        printf("Case %d: %d\n",++cs,dfs());
    }
}

