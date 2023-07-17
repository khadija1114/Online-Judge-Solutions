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

const int N=1e6+2;
long long  mod=1e9+7;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
vi adj[N];
bool visited[N];

int bfs(int a){
    visited[a]=1;
    queue<int> q;
    int cnt=1;
    q.push(a);
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(auto u:adj[v]){
            if(!visited[u]){
                cnt++;
                visited[u]=1;
                q.push(u);
            }
        }
    }
    return cnt;
}
int main()
{
    int mx=0,cnt=0;
    cin>>n>>m;
    for(i=0;i<m;i++){
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for(i=1;i<=n;i++){
        if(!visited[i])
            mx=max(mx,bfs(i));

    }
    cout<<mx<<endl;
}

