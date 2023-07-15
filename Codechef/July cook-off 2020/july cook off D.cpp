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
long long  mod=1e9+9,x,y;
int t,j,cs=0,n,a,b,i,k,prime[100],dis[N];
bool visited[N],mark[N];
vector<int> adj[N];
string s;

void sieve(){
    prime[k++]=2;
    for(i=3;i<100;i+=2){
        if(!mark[i]){
            prime[k++]=i;
            for(j=i;j<100;j+=2*i)
                mark[j]=1;
        }
    }
}

void clear_(){
    for(i=0;i<N;i++){
        dis[i]=0;visited[i]=0;
        adj[i].clear();
    }
}

void bfs(int a,int b){
    visited[a]=true;
    queue<int> q;
    dis[a]=0;
    q.push(a);
    while(!q.empty()){
        int v=q.front(); q.pop();
        for(auto u:adj[v]){
            if(!visited[u]){
                visited[u]=true;
                dis[u]=dis[v]+1;
                q.push(u);
            }
        }
    }
}
int main()
{
     sieve();
     x=1;y=1;
     for(i=k-1;i>=0;i--){
        if(x<y) x*=prime[i];
        else y*=prime[i];
     }

    w(t){
        cin>>n;
        clear_();
        for(i=0;i<n-1;i++){
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        bfs(1,n);
       vector<long long> v(n+1);
       for(i=1;i<=n;i++){
        if(dis[i]&1)  v[i]=x;
        else v[i]=y;
       }
       for(i=1;i<=n;i++){
        cout<<v[i]<<" ";
       }
       cout<<endl;
    }
}

