#include<bits/stdc++.h>
#define bg begin()
#define en end()
#define pb push_back
#define rep(i,b) for(i=0;i<=b;i++)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=3*1e5+2;
unsigned int pre[N],ar[N];
int t,j,cs=0,n,a,b,i,k=1,m,q,par[N];
bool vis[N];
vi adj[N];

struct hash_pair {
   size_t operator()(const pair<int,int>&x)const{
    size_t ans=0;
    for(int i=0;i<x.first;i++)
      ans+=x.second;
    return ans;
  }
};

unordered_map<pii,unsigned int,hash_pair> mp;

void dfs(int s)
{
   // st[s]=k++;
    pre[s]=pre[par[s]]+ar[s]*ar[s];
    vis[s]=true;
    for(auto it:adj[s]){
        if(!vis[it]) {
            par[it]=s;
            dfs(it);
        }
    }
   // en[s]=k++;
    return ;
}


unsigned int calans(int u,int v)
{
    if(u>v) swap(u,v);
    if(u==v) return pre[u];
    if(mp[{u,v}]) return mp[{u,v}];

    return mp[{u,v}]=ar[u]*ar[v]+calans(par[u],par[v]);
}

int main()
{
    stopwatch sw;
    sw.tick();
 //   mp.reserve(1024);
  //  mp.max_load_factor(0.25);
    scanf("%d%d",&n,&q);
    for(i=1;i<=n;i++){
        scanf("%u",&ar[i]);
    }
    rep(i,n-2){
        scanf("%d%d",&a,&b);
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(1);
    vector<pii> v;
    rep(i,q-1){
        scanf("%d%d",&a,&b);
        v.pb(node(i,a,b);

       // printf("%u\n",calans(a,b));
    }

    sort(v.bg,v.en);
    int ans[q];

    for(auto it:v){
        unsigned int a=it.ff,b=it.ss;
        int pos=it.pos;

        unsigned int cnt=0;
        while(u!=v){
            if()
        }

    }


    sw.tock();
    cout << "This took " << sw.report_ms() << "ms.\n";

}



