#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<char,char> pcc;
typedef vector<int> vi;

long long  mod=1e9+9;
const int N=1e6+2;
int t,m,cs=0,n,cnt=0,u,v,w,a,ans=0,b,inf=N;
string s,s1;
char c,cc;
vector<pair<int,int>> adj[150];
int dis[200][200];
bool visited[200];

void dijkstra(int s){
    int i,j;
    //cout<<1<<endl;
   for(i=0;i<200;i++){
    dis[s][i]=inf;
    visited[i]=false;
   }

    dis[s][s]=0;
    for(i=33;i<=126;i++){
       // cout<<i<<" " ;
        u=-1;
        for(j=33;j<=126;j++){
            if(!visited[j] &&(u==-1||dis[s][u]>dis[s][j]))
                u=j;
        }
       // cout<<u<<endl;
        if(dis[s][u]==inf)
            break;
        visited[u]=true;
        for(int it=0;it<adj[u].size();it++){
            v=adj[u][it].ff,w=adj[u][it].ss;
            if(dis[s][u]+w<dis[s][v]) {
                dis[s][v]=dis[s][u]+w;
               // prn[v]=u;
            }
        }
    }
}


int main()
{
    int i,j;
    cin>>s>>s1>>m;
    for(i=0;i<m;i++){
        cin>>c>>cc>>n;
        a=int(c);b=int(cc);
        adj[a].pb(mp(cc,n));
    }

    for(i=33;i<=126;i++){
        dijkstra(i);
    }
    for(i=0;i<s.size();i++){
        if(dis[int(s[i])][int(s1[i])]==inf)
        {
            cout<<-1<<endl;
            return 0;
        }
        ans+=dis[int(s[i])][int(s1[i])];
    }
    cout<<ans<<endl;
}

