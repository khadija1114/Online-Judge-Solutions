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

const int N=205;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,dis[N][N],ans;
queue<pii>q;
bool visited[N][N];
string s[N];

void bfs(){
    while(!q.empty()){
        pii v=q.front();
       // int x=v.ff,y=v.ss;
        q.pop();
        for(int i = 0; i<4;i++){
            int x=dxx[i]+v.ff,y=dyy[i]+v.ss;
            if(x>=0 && y>=0 && x<n && y<m && !visited[x][y] && s[x][y]!='#'){
                dis[x][y]=dis[v.ff][v.ss]+1;
                visited[x][y]=1;
                q.push({x,y});
            }
        }
    }
    return ;
}

int  bbfs(int x,int y,int cnt){
    queue<pair<pii,int>> q;
    q.push({{x,y},cnt});
    visited[x][y]=0;
    while(!q.empty()){
        pair<pii,int> p=q.front();q.pop();
        int xx=p.ff.ff,yy=p.ff.ss,cc=p.ss;
       // cout<<xx<<" "<<yy<<" "<<cc<<" "<<dis[xx][yy]<<endl;
        if(cc>=dis[xx][yy]){
            continue;
        }
        if(xx==0 || yy==0 || xx==n-1 || yy ==m-1)
            return cc+1;
        else{
            for(int i=0;i<4;i++){
                int a=xx+dxx[i],b=yy+dyy[i];
                if(a>=0 && b>=0 && a<n && b<m &&!visited[a][b] && s[a][b]!='#'){
                    visited[a][b]=1;
                    q.push({{a,b},cc+1});
                }
            }
        }
    }
    return -1;
}
int main()
{
    w(t){
        memset(visited,0,sizeof visited);
        memset(dis,0,sizeof dis);
        scanf("%d%d",&n,&m);
        rep(i,n-1) cin>>s[i];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(s[i][j]=='F'){
                    q.push({i,j});
                    visited[i][j]=1;
                }
                if(s[i][j]=='J'){
                    a=i,b=j;
                }
            }
        }
        bfs();
        //rep(i,n-1) { rep(j,m-1) cout<<dis[i][j]<<" "; cout<<endl; }
        memset(visited,0,sizeof visited);
        ans=bbfs(a,b,0);
        if(ans!=-1) printf("Case %d: %d\n",++cs,ans);
        else printf("Case %d: IMPOSSIBLE\n",++cs);
    }
}

