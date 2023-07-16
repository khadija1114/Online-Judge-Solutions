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

const int N=1e4+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,m;
bool color[N],visited[N];
vi adj[N];

void clear_(){
    for(i=0;i<=n;i++){
        adj[i].clear();
        visited[i]=false;
        color[i]=0;
    }
}

bool isbipartite(int v){
    for(auto u:adj[v]){
        if(!visited[u]){
            visited[u]=true;
            color[u]=!color[v];
            if(!isbipartite(u))
                return false;
        }
        else if(color[u]==color[v])
            return false;
    }
    return true;
}

int main()
{
    w(t){
        scanf("%d%d",&n,&m);
          clear_();
        for(i=0;i<m;i++){
             scanf("%d%d",&a,&b);
             adj[a].pb(b);
             adj[b].pb(a);
        }
        bool ans=true;
        for(i=1;i<=n && ans;i++){
            if(!visited[i]){
                ans=isbipartite(i);
            }
        }
        printf("Scenario #%d:\n",++cs);
        if(ans) printf("No suspicious bugs found!\n");
        else  printf("Suspicious bugs found!\n");
    }
}

