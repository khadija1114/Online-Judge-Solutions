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

const int N=30000;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,x,mx,dis[N],c;
vector<pii> adj[N];
bool visited[N];

void dfs(int s){
    visited[s]=1;
    for(auto it:adj[s]){
        if(!visited[it.ff]){
            dis[it.ff]=dis[s]+it.ss;
            if(dis[it.ff]>mx){
                mx=dis[it.ff];
                x=it.ff;
            }
            dfs(it.ff);
        }
    }
}

void clear_(int n){
    rep(i,n){
        visited[i]=0;
        dis[i]=0;
    }
}
int main()
{
    w(t){
        scanf("%d",&n);
        rep(i,n) adj[i].clear();
        for(i=0;i<n-1;i++){
            scanf("%d%d%d",&a,&b,&c);
            adj[a].pb({b,c});
            adj[b].pb({a,c});
        }
        mx=-1;
        clear_( n);
        dfs(0);
        int dis1[n],dis2[n];
        clear_(n);
        mx=-1;
        dfs(x);
        rep(i,n-1) dis1[i]=dis[i];
        clear_(n);
        dfs(x);
        rep(i,n-1) dis2[i]=dis[i];

        printf("Case %d:\n",++cs);
        rep(i,n-1) printf("%d\n",max(dis1[i],dis2[i]));
    }
}

