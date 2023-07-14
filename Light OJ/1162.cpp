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

const int N=1e5+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,q,k,m,inf=1e9,dep[N],par[22][N],maxx[22][N],minn[22][N],mx,mn,c;
bool visited[N];
vector<pii> adj[N];

void dfs(int s){
    visited[s]=1;
    for(auto it:adj[s]){
        if(!visited[it.ff]){
            par[0][it.ff]=s;
            dep[it.ff]=dep[s]+1;
            minn[0][it.ff]=it.ss;
            maxx[0][it.ff]=it.ss;
          //  cout<<0<<" "<<it.ff<<" "<<minn[0][it.ff]<<" "<<maxx[0][it.ff]<<endl;
            dfs(it.ff);
        }
    }
    return ;
}

int findpar(int a,int k){
    for(int i=0;k>0;i++){
        if(k&(1<<i)){
            k-=(1<<i);
            mx=max(mx,maxx[i][a]);
            mn=min(mn,minn[i][a]);
            a=par[i][a];
        }
    }
    return a;
}
void lca(int a,int b){
    mx=0,mn=inf;
    if(dep[a]<dep[b]) swap(a,b);
    a=findpar(a,dep[a]-dep[b]);

    if(a==b) return ;
    for(int i=20;i>=0;i--){
        if(par[i][a]!=par[i][b]){
            mx=max(mx,max(maxx[i][a],maxx[i][b]));
            mn=min(mn,min(minn[i][a],minn[i][b]));
            a=par[i][a];
            b=par[i][b];
        }
    }
    mx=max(mx,max(maxx[0][a],maxx[0][b]));
    mn=min(mn,min(minn[0][a],minn[0][b]));

    return ;
}

void clear_(){
    for(int i=0;i<=n+1;i++){
        adj[i].clear();
        visited[i]=0;
        dep[i]=0;
        deg[i]=0;
        for(int j=0;j<21;j++){
            par[j][i]=0;
            maxx[j][i]=0;
            minn[j][i]=inf;
        }
    }
}
int main()
{
    w(t){
        scanf("%d",&n);
        clear_();
        rep(i,n-2){
            scanf("%d%d%d",&a,&b,&c);
            adj[a].pb({b,c});
            adj[b].pb({a,c});
            //deg[a]++;deg[b]++;
        }
       // for(i=1;i<=n;i++) if(deg[i]==1) { dfs(i) ; break ; }
       dfs(1);
        for(i=1;i<=20;i++){
            for(j=1;j<=n;j++){
                int p=par[i-1][j];
                p=par[i-1][p];
                par[i][j]=p;

                minn[i][j]=min(minn[i-1][j],minn[i-1][par[i-1][j]]);
                maxx[i][j]=max(maxx[i-1][j],maxx[i-1][par[i-1][j]]);
               // cout<<i<<" "<<j<<" "<<minn[i][j]<<" "<<maxx[i][j]<<endl;
            }
        }


        printf("Case %d:\n",++cs);
        w(q){
            scanf("%d%d",&a,&b);
            lca(a,b);
            printf("%d %d\n",mn,mx);
        }
    }
}

