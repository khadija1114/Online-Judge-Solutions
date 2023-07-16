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

const int N=1e5+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,ans,m;
bool visited[N];
vi adj[N];
string s;

void clear_(){
    for(i=0;i<N;i++) visited[i]=false;
    ans=0;
    for(i=0;i<=n;i++) adj[i].clear();
}

void dfs(int v){
    if(visited[v]) return ;
    visited[v]=true;
    for(auto u:adj[v])
        dfs(u);
}
int main()
{
    w(t){
        scanf("%d%d",&n,&m);
        clear_();
        for(i=0;i<m;i++){
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        //cout<<1<<endl;
        for(i=0;i<n;i++){
            if(visited[i]) continue;
            dfs(i);
            ans++;
        }

        printf("%d\n",ans);
    }
}


