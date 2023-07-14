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

const int N=1e4+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,ans,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,timer,st[N],low[N];
vi adj[N];
bool vis[N],point[N];

void allclear()
{
    rep(i,n+1){
    vis[i]=0;
    adj[i].clear();
    point[i]=0;
    }
    ans=0;
    timer=1;
}

void dfs(int s,int p=-1)
{
    vis[s]=1;
    st[s]=low[s]=timer++;
    int ch=0;
    for(auto it:adj[s]){
        if(it==p)
            continue;
        if(vis[it])
            low[s]=min(low[s],st[it]);
        else{
            dfs(it,s);
            low[s]=min(low[s],low[it]);
            if(st[s]<=low[it] && p!=-1)
                point[s]=true;
            ch++;
        }
    }
    if(p==-1 && ch>1)  point[s]=true;
    return ;
}

int main()
{
    w(t){
        scanf("%d",&n);
        allclear();
        w(m){
            scanf("%d%d",&a,&b);
            adj[a].pb(b);
            adj[b].pb(a);
        }
        for(i=1;i<=n;i++)
            if(!vis[i])
                dfs(i);
        for(i=1;i<=n;i++) if(point[i]) ans++;
        printf("Case %d: %d\n",++cs,ans);
    }
}


