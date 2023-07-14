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

const int N=10005;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,c,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,par[N];
bool visited[N];
vi grp[N];

class node{
public:
    int u,v,w;
    node(){}
    node(int a,int b,int c){
        u=a;
        v=b;
        w=c;
    }
    bool operator<(node const& other){
        return w<other.w;
    }
};

void dfs(int s){
    visited[s]=true;
    for(auto it:grp[s]){
        if(!visited[it]){
            dfs(it);
        }
    }
    return ;
}

int findpar(int a){
    if(par[a]==a) return a;
    return par[a]=findpar(par[a]);
}

void unionset(int a,int b){
    a=findpar(a);
    b=findpar(b);
    par[a]=b;
}
int main()
{
    w(t){
        scanf("%d%d%d",&n,&m,&k);
        int cnt=0,ans=0;
        vector<node> adj;
        rep(i,m-1){
            scanf("%d%d%d",&a,&b,&c);
            adj.pb(node(a,b,c));
        }
        rep(i,n){
            par[i]=i;
            visited[i]=0;
            grp[i].clear();
        }
        sort(adj.bg,adj.en);
        for(auto it:adj){
            if(findpar(it.u)!=findpar(it.v) && it.w<k){
                ans+=it.w;
                unionset(it.u,it.v);
                grp[it.u].pb(it.v);
                grp[it.v].pb(it.u);
            }
        }
        for(i=1;i<=n;i++){
            if(!visited[i])
            {
                cnt++;
                ans+=k;
                dfs(i);
            }
        }
        printf("Case %d: %d %d\n",++cs,ans,cnt);
    }
}

