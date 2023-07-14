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

const int N=1002;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,cnt[N];
bool visited[N];
vi adj[N];
string s;

void dfs(int s){
    visited[s]=1;
    cnt[s]++;
    for(auto it:adj[s]){
        if(!visited[it]){
            visited[it]=1;
            //cnt[it]++;
            dfs(it);
        }
    }
    return ;
}

int main()
{
    w(t){
        scanf("%d%d%d",&k,&n,&m);
        int st[k];
        memset(cnt,0,sizeof cnt);
        int ppl=0,ans=0;
        rep(i,k-1){
            scanf("%d",&st[i]);
        }
        rep(i,n+1) adj[i].clear();
        rep(i,m-1){
            scanf("%d%d",&a,&b);
            adj[a].pb(b);
        }
        for(i=0;i<k;i++){
            memset(visited,0,sizeof visited);
            dfs(st[i]);
        }
        for(i=1;i<=n;i++){
            if(cnt[i]==k ) ans++;
        }
        printf("Case %d: %d\n",++cs,ans);
    }
}

