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

const int N=1e2+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dis[N];
bool visited[N];
string s;

class graph{
    public:
    int u,cnt;
};
vector<graph> adj[N];
void clear_(){
    for(i=0;i<N;i++){
        dis[i]=0; visited[i]=false;
        adj[i].clear();
    }
}

void dfs(int v){
    if(visited[v]){
        b=dis[v]-dis[a];
        cout<<v<<" "<<a<<endl;
        cout<<dis[v]<<" "<<dis[a]<<endl;
        return ;
    }
    cout<<v<<endl;
    visited[v]=true;
   for(auto e : adj[v]){
    dis[e.u]=dis[v]+e.cnt;
    dfs(e.u);
   }
}
int main()
{
    while(scanf("%d",&n) && n){

        graph x;
        for(i=1;i<=n;i++){
            cin>>a>>s;
            if(s[0]=='t'){
                x.u=a;
                x.cnt=1;
                adj[i].pb(x);
            }
            else{
                x.u=a;
                x.cnt=0;
                adj[i].pb(x);
            }
        }
        clear_();
        bool ans=true;
        for(i=1;i<=n && ans;i++){
            if(!visited[i]){
                //cout<<i<<endl;
                a=i;
                dfs(i);
                if(b&1) ans=false;
            }
        }
//        for(i=1;i<=n;i++){
//              graph  a=adj[i][0];
//            cout<<i<<" "<<a.u<<endl;
//        }
        if(ans) cout<<"NOT PARADOX"<<endl;
        else cout<<"PARADOX"<<endl;
    }
}

