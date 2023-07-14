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

const int N=1002;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dis[N];
vi prime[N],adj[N];
bool visited[N],mark[N];

void sieve(){
    for(i=4;i<N;i+=2) {
        prime[i].pb(2);
        mark[i]=1;
    }
    for(int i=3;i<N;i+=2){
        if(!mark[i]){
            for(j=2*i;j<N;j+=i){
                mark[j]=1;
                prime[j].pb(i);
            }

        }
    }
}

int bfs(int a,int b){
    if(a==b) return 0;
    if(!mark[a] || a>b) return -1;
    for(i=a;i<=b;i++){
        visited[i]=0;
        dis[i]=0;
    }
    visited[a]=1;
    queue<int> q;
    q.push(a);
    while(!q.empty()){
        int v=q.front();
        q.pop();// cout<<v<<" ";
        for(auto u:adj[v]){
            if(!visited[u] && u<=b){
                visited[u]=1;
                dis[u]=dis[v]+1;
                q.push(u);
              //  cout<<u<<" ";
                if(u==b) return dis[u];
            }
        }
       // cout<<endl;
    }
    return -1;
}
int main()
{
    int a,b;
    sieve();
    for(int i=2;i<N;i++){
        for(int j=0;j<prime[i].size() && i+prime[i][j]<N;j++){
            adj[i].pb(i+prime[i][j]);
        }
    }
    w(t){
        scanf("%d%d",&a,&b);
        printf("Case %d: ",++cs);
        printf("%d\n",bfs(a,b));
       // for(int i=a;i<=b;i++) cout<<i<<" "<<dis[i]<<endl;
    }
}

