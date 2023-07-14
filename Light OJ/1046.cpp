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

const int N=12;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={2,2,-2,-2,1,1,-1,-1},dyy[]={1,-1,1,-1,2,-2,2,-2},k,m,dis[N][N][N][N],inf=1e9;
string s[N];
class node{
    public:
    int xx,yy,d;
    node(){}
    node(int x,int y,int dist){
        xx=x; yy=y; d=dist;
    }
};

void bfs(int x,int y){
    queue<node> q;
    q.push(node(x,y,0));
    dis[x][y][x][y]=0;
    while(!q.empty()){
        int a=q.front().xx , b=q.front().yy, dist=q.front().d;
        q.pop();
        for(int i=0;i<8;i++ ){
            int dx=dxx[i]+a,dy=dyy[i]+b;
            if(dx>=0 && dy>=0 && dx<n && dy<m &&  dis[x][y][dx][dy]>dist+1){
                q.push(node(dx,dy,dist+1));
                dis[x][y][dx][dy]=dist+1;
            }
        }
    }
}
void clear_(){
    rep(i,n) rep(j,m) rep(k,n) rep(a,m) dis[i][j][k][a]=inf;
}
int main()
{
    w(t){
        scanf("%d%d",&n,&m);
        vector<pii> v;
        rep(i,n-1){
            cin>>s[i];
            rep(j,m-1) if(s[i][j]>'0' && s[i][j]<='9') v.pb({i,j});
        }
        clear_();
      //  for(auto it:v) cout<<it.ff<<" "<<it.ss<<endl;
        for(auto it:v) bfs(it.ff,it.ss);
        ll ans=inf,sum=0;
        rep(i,n-1)
            rep(j,m-1){
                for(k=0,sum=0;k<v.size();k++){
                    int step=dis[v[k].ff][v[k].ss][i][j];
                    int ride=s[v[k].ff][v[k].ss]-'0';
                    if(step==inf) { sum=inf; break; }
                    else if(step%ride) step+=ride;
                    step/=ride;
                    sum+=step;
                }
                ans=min(ans,sum);
            }

        if(ans==inf) printf("Case %d: -1\n",++cs);
        else printf("Case %d: %d\n",++cs,ans);
    }
}

