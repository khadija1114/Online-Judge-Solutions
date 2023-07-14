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
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1005;
int t,j,cs=0,n,a,b,i,k,m,scc[N],node;
vi adj[N],rev[N],tp,cmp[N];
bool vis[N],ans;

void allclear()
{
    for(i=0;i<N;i++){
        adj[i].clear();
        rev[i].clear();
        vis[i]=1;
        scc[i]=0;
        k=0;
    }
    ans=true;
    tp.clear();
}

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
    scc[s]=k;
  //  cmp[k].pb(s);
    for(auto it:rev[s])
        if(!vis[it])
            dfs2(it);
}

int main()
{
    w(t){
        allclear();
        map<int,int> in,out;
        w(n){
            w(m){
                scanf("%d%d",&a,&b);
                adj[a].pb(b);
                rev[b].pb(a);
                vis[a]=vis[b]=0;
               // in[a]=out[a]=in[b]=out[b]=0;
            }
        }
//        cout<<endl;
//        for(auto it:rev[6])
//            cout<<it<<" ";
//        cout<<endl;
       for(i=0;i<N;i++){
        if(!vis[i]){
            dfs1(i);
        }
       }
       reverse(tp.bg,tp.en);
       if(tp[0]!=0) ans=false;
//       cout<<endl;
//       for(auto it:tp)
//        cout<<it<<" ";
//       cout<<endl;
       rep(i,N-2) vis[i]=0;
       for(auto it:tp){
            if(!vis[it] && (rev[it].size() || adj[it].size())){
                dfs2(it);
                k++;
            }
       }
        for(i=0;i<k;i++){
            in[i]=out[i]=0;
//            for(auto it:cmp[i])
//                cout<<it<<" ";
//            cout<<endl;
        }
       for(i=0;i<N;i++){
        for(auto it:adj[i]){
            if(scc[i]!=scc[it]){
                out[scc[i]]++;
                in[scc[it]]++;
            }
        }
       }
       int cntin=0,cntout=0;
    //   cout<<node<<endl;
       if(in[0]) ans=false;
        for(auto it:in){
           // cout<<it.ff<<" "<<it.ss<<endl;
            if(it.ss>1 || !ans){
                ans=false;
                break;
            }
            if( it.ff!=0 && it.ss==0){
                ans=false;
                break;
            }
        }
       //cout<<endl<<endl;
        for(auto it:out){
         //  cout<<it.ff<<" "<<it.ss<<endl;
             if(it.ss>1 || !ans){
                ans=false;
                break;
             }
            if(it.ss==0) cntout++;
        }
       if(cntout==1 && ans){
            printf("Case %d: YES\n",++cs);
       }
       else{
            printf("Case %d: NO\n",++cs);
       }
    }
}



