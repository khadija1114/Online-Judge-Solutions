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
int t,j,cs=0,n,a,b,i,k,m,cnt[N],low[N],st[N],timer,ans,par[N];
vi adj[N];
vector<pii> bridge;
bool vis[N];
map<pii,bool> isbridge;

void allclear()
{
    rep(i,n+1){
        adj[i].clear();
        vis[i]=0;
        par[i]=i;
        cnt[i]=0;
    }
    bridge.clear();
    isbridge.clear();
    ans=0;
    timer=1;
}

void dfs(int s,int p=-1)
{
    vis[s]=1;
    st[s]=low[s]=timer++;
    for(auto it:adj[s]){
        if(it==p)
            continue;
        if(vis[it])
            low[s]=min(low[s],low[it]);
        else{
            dfs(it,s);
            low[s]=min(low[s],low[it]);
            if(low[it]>st[s]){
                 bridge.pb({s,it});
                 isbridge[{it,s}]=1;
                 isbridge[{s,it}]=1;
            }
        }
    }
}

int find_par(int a)
{
    if(par[a]==a) return a;
    return par[a]=find_par(par[a]);
}

void union_set(int a,int b)
{
    a=find_par(a);
    b=find_par(b);
    par[a]=b;
}

int main()
{
    int a,b,i;
    w(t){
        scanf("%d%d",&n,&m);
        allclear();
        rep(i,m-1){
            scanf("%d%d",&a,&b);
            adj[a].pb(b);
            adj[b].pb(a);
        }
       for(i=0;i<n;i++){
        if(!vis[i]) dfs(i);
       }
        rep(i,n-1){
            for(auto it:adj[i]){
                if(isbridge[{i,it}])
                    continue;
                if(find_par(it)!=find_par(i))
                   union_set(it,i);
            }
        }
        for(auto it:bridge){
         //   cout<<it.ff<<" "<<it.ss<<endl;
            a=find_par(it.ff);
            b=find_par(it.ss);
            cnt[a]++;
            cnt[b]++;
        }
        rep(i,n-1){
            if(cnt[i]==1) ans++;
        }
        ans=(ans+1)/2;
        printf("Case %d: %d\n",++cs,ans);
    }
}
