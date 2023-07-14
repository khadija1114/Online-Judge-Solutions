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

const int N=110;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,r;

int main()
{
    w(t){
        scanf("%d%d",&n,&r);
        vi adj[n];
        rep(i,r-1){
            scanf("%d%d",&a,&b);
            adj[a].pb(b);
            adj[b].pb(a);
        }
        int dis1[n+1]={},dis2[n+1]={};
        bool vis1[n+1]={},vis2[n+1]={};
        queue<int>q;
        scanf("%d%d",&a,&b);
        q.push(a);
        vis1[a]=1;
        while(!q.empty()){
            int v=q.front();q.pop();
            for(auto u:adj[v]){
                if(!vis1[u]){
                    vis1[u]=1;
                    dis1[u]=dis1[v]+1;
                    q.push(u);
                }
            }
        }
        q.push(b);
        vis2[b]=1;
         while(!q.empty()){
            int v=q.front();q.pop();
            for(auto u:adj[v]){
                if(!vis2[u]){
                    vis2[u]=1;
                    dis2[u]=dis2[v]+1;
                    q.push(u);
                }
            }
        }
        int ans=-1;
        for(i=0;i<n;i++) ans=max(ans,dis1[i]+dis2[i]);
        printf("Case %d: %d\n",++cs,ans);
    }
}

