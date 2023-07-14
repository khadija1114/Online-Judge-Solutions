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

const int N=1005;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,ar[N];
bool visited[N],ans;
vi adj[N];
set<int> st;

bool bfs(int s){
    int cnt=0,node=0;
    visited[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int v=q.front();
        q.pop();
        cnt+=ar[v];
        node++;
        for(auto u:adj[v]){
            if(!visited[u]){
                visited[u]=1;
                q.push(u);
            }
        }
    }
    if(cnt%node!=0){
        return false;
    }
    cnt/=node;
    st.insert(cnt);
    if(st.size()>1) return false;
    return true;
}

void clear_(){
    for(i=0;i<=n+1;i++){
        adj[i].clear();
        visited[i]=0;
        ans=true;
    }
    st.clear();
}
int main()
{
    w(t){
        scanf("%d%d",&n,&m);
        clear_();
        rep(i,n-1) scanf("%d",&ar[i+1]);
        rep(i,m-1){
            scanf("%d%d",&a,&b);
            adj[a].pb(b);
            adj[b].pb(a);
        }
        for(i=1;i<=n && ans;i++){
            if(!visited[i]){
                ans=bfs(i);
            }
        }
        if(ans) printf("Case %d: Yes\n",++cs);
        else printf("Case %d: No\n",++cs);
    }
}

