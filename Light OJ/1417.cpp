#include<bits/stdc++.h>
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
typedef vector<int> vi;

const int N=50002;
int t,j,cs=0,n,a,b,i,k,m,mx[N],scc[N],nv[N];
vi adj[N],rev[N],grp[N],tp;
bool vis[N];

void dfs1(int s)
{
    vis[s]=true;
    for(auto it:adj[s])
        if(!vis[it])
            dfs1(it);
    tp.pb(s);
}


void dfs2(int s)
{
    vis[s]=true;
    scc[s]=a;
    nv[a]++;
    for(auto it:rev[s])
        if(!vis[it])
            dfs2(it);
}

void dfs3(int s)
{
    vis[s]=true;
    for(auto it:grp[s])
        if(!vis[it])
            dfs3(it);
    tp.pb(s);
}

void allclear()
{
    rep(i,n){
        vis[i]=0;
        adj[i].clear();
        rev[i].clear();
        grp[i].clear();
        scc[i]=0;
        nv[i]=0;
        mx[i]=0;

    }
    tp.clear();
}

int main()
{
    w(t){
        scanf("%d",&n);
        allclear();
        for(i=0;i<n;i++){
            scanf("%d%d",&a,&b);
            adj[a].pb(b);
            rev[b].pb(a);
        }
        for(i=1;i<=n;i++)
            if(!vis[i])
                dfs1(i);

        rep(i,n) vis[i]=0;
        reverse(tp.bg,tp.en);
        for(auto it:tp){
            if(!vis[it])
            {
                a=it;
                dfs2(it);
                mx[a]=nv[a];
              //  cout<<a<<endl;
            }
        }
        tp.clear();
//      for(i=1;i<=n;i++){
//            cout<<scc[i]<<" ";
//        }
//        cout<<endl;
        for(i=1;i<=n;i++){
            for(auto it:adj[i]){
             //   cout<<i<<" "<<it<<" "<<scc[i]<<" "<<scc[it]<<endl;
                if(scc[i]!=scc[it]){
                    grp[scc[i]].pb(scc[it]);
                    vis[scc[i]]=vis[scc[it]]=0;
                   // cout<<1<<" "<<scc[i]<<" "<<scc[it]<<endl;
                 //   rev[it].pb(i);
                }
            }
        }
        for(i=1;i<=n;i++){
           // cout<<i<<" "<<vis[i]<<endl;
            if(!vis[i]){
                dfs3(i);
            //    cout<<1<<" "<<i<<endl;
            }
        }
      //  int tps=tp.size();
     //   for(auto it:tp) cout<<it<<endl;
        for(auto ii:tp){
            //cout<<tp[i]<<" ";
            for(auto it:grp[ii]){
                mx[ii]=max(mx[ii],nv[ii]+mx[it]);
            }
        }
        int ans=0,node;
        for(i=1;i<=n;i++){
      //     cout<<mx[i]<<" ";
            if(mx[i]>ans){
                node=i;
                ans=mx[i];
            }
        }
        printf("Case %d: %d\n",++cs,node);
    }
}



