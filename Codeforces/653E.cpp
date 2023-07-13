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
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,u,v,m,k;

set<int> remaining;//will contain not visited nodes
set<pair<int,int>> forbidden;//will contain forbidden edge

// will see if two nodes can be connected, true if connected
bool is_connected(int a,int b){
    if(a>b) swap(a,b);
    return forbidden.find(mp(a,b))==forbidden.end();
}
//traverse on remaining nodes
void dfs(int a){
    vector<int> traversed;
    for(auto u: remaining)
        if(is_connected(a,u))
            traversed.pb(u);
    for(auto u:traversed)
        remaining.erase(u);
    for(auto u:traversed)
        dfs(u);
}

int main()
{
    scanf("%d%d%d",&n,&m,&k);
    int allowed_deg=n-1;//highest degree fore node 1
    int components=0;// needed degree for node 1
    for(i=2;i<=n;i++) remaining.insert(i);
    for(i=0;i<m;i++){
        scanf("%d%d",&u,&v);
        if(u>v) swap(u,v);
        if(u==1) allowed_deg--;
        forbidden.insert(mp(u,v));
    }

    if(allowed_deg<k){
        printf("impossible\n");
        return 0;
    }
    for(i=2;i<=n;i++){
        if(is_connected(1,i) && remaining.find(i)!=remaining.end()){
             dfs(i);
             components++;
        }
    }
    //the graph is not connected or needed degree for 1 is greater than k
    if(!remaining.empty() || components>k){
        printf("impossible\n");
        return 0;
    }
    printf("possible\n");
}

