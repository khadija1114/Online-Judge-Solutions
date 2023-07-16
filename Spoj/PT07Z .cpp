#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define sf(x) scanf("%d",&x)
#define rep(i,b) for(i=0;i<b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=1e4+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,maxpath,x;
bool visited[N];
vi adj[N];
string s;

void dfs(int v,int cnt){
    visited[v]=true;
    cnt++;
    for(auto u:adj[v]){
        if(!visited[u]){
            if(cnt>=maxpath){
                maxpath=cnt;
                x=u;
            }
            dfs(u,cnt);
        }
    }
}
void clear_(){
    for(i=0;i<=n;i++)
        visited[i]=false;
}
void diameter(){
    clear_();
    dfs(1,0);
    clear_();
    dfs(x,0);
}
int main()
{
   sf(n);
   rep(i,n-1){
    sf(a);
    sf(b);
    adj[a].pb(b);
    adj[b].pb(a);
   }
   diameter();
   printf("%d\n",maxpath);
}

