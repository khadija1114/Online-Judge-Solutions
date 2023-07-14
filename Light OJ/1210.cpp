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

const int N=20005;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,in[N],out[N],scc[N],ans,csize;
vi adj[N],rev[N],topsort;
bool vis[N];


void dfs1(int s)
{
    vis[s]=1;
    for(auto it:adj[s])
        if(!vis[it])
            dfs1(it);

    topsort.pb(s);
    return ;
}

void dfs2(int s)
{
    vis[s]=1;
    scc[s]=csize;
  //  cmp[csize].pb(s);
    for(auto it:rev[s])
        if(!vis[it])
            dfs2(it);
    return ;
}

void kosaraju()
{
    for(i=1;i<=n;i++){
        if(!vis[i])
            dfs1(i);
    }
    csize=0;
    rep(i,n) vis[i]=0;
    reverse(topsort.bg,topsort.en);
    for(auto it:topsort){
        if(!vis[it]){
            dfs2(it);
            csize++;
        }
    }
    return ;
}

void allclear()
{
    rep(i,n){
        adj[i].clear();
        rev[i].clear();
        vis[i]=0;
        in[i]=0;
        out[i]=0;
        scc[i]=0;
    }
    topsort.clear();
    ans=0;
}

int main()
{
    w(t){
        scanf("%d%d",&n,&m);
        allclear();
        rep(i,m-1){
            scanf("%d%d",&a,&b);
            adj[a].pb(b);
            rev[b].pb(a);
        }
        kosaraju();
        int c1=0,c2=0;
        for(i=1;i<=n;i++){
            for(auto it:adj[i]){
                if(scc[i]!=scc[it]){
                    out[scc[i]]++;
                    in[scc[it]]++;
                }
            }
        }
     //   cout<<csize<<endl;
        for(i=0;i<csize;i++){
            if(in[i]==0) c1++;
            if(out[i]==0) c2++;
            //cout<<i<<" "<<in[i]<<" "<<out[i]<<endl;
        }
        ans=max(c1,c2);
        if(csize==1) ans=0;
        printf("Case %d: %d\n",++cs,ans);
    }
}

