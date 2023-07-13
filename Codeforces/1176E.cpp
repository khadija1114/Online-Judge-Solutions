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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    w(t){
        cin>>n>>m;
        vi adj[n+1],dis(n+1),od,ev;
        bool visited[n+1]={};
        for(i=0;i<m;i++){
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        queue<int> q;
        q.push(1);
        visited[1]=1;
        dis[1]=0;
        while(!q.empty()){
            a=q.front(); q.pop();
            if(dis[a]&1) od.pb(a);
            else ev.pb(a);
           // cout<<a<<endl;
            for(auto it=adj[a].bg;it!=adj[a].en;it++){
                if(!visited[*it]){
                    visited[*it]=1;
                    dis[*it]=dis[a]+1;
                    q.push(*it);
                }
            }
        }
        if(od.size()<ev.size()){
            cout<<od.size()<<endl;
            for(auto it =od.bg;it!=od.en;it++ ) cout <<*it<<" ";
        }
        else{
            cout<<ev.size()<<endl;
            for(auto it=ev.bg;it!=ev.en;it++) cout<<*it<< " ";
        }
        cout<<endl;
    }
}

