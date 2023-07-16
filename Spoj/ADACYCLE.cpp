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

const int N=2002;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dis[N],ans[N];
string s;
vi adj[N];
bool visited[N],found[N];

int  bfs( int v ){
    queue<int> q;
    q.push(v);
    memset(visited,0,sizeof(visited));
    memset(dis,0,sizeof(dis));
    while(!q.empty()){
        int e=q.front();q.pop();
        for(auto u:adj[e]){
            if(visited[u]){
              continue;
            }
            if(u==v){
                return dis[e]+1;
            }
            visited[u]=true;
            dis[u]=dis[e]+1;
            q.push(u);
        }
    }
    return -1;
}
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a;
            if(a) adj[i].pb(j);
        }
    }
    for(i=0;i<n;i++){
       ans[i]= bfs(i);
    }
    for(i=0;i<n;i++){
        if(ans[i]==-1) printf("NO WAY\n");
        else printf("%d\n",ans[i]);
    }
}

