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

const int N=15;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,dis[N][N],cnt;
string s[N];
bool visited[N][N];

int bfs(int a,int b){
    queue<pii> q;
    s[a][b]='.';
    int ans=0,track=1;
    q.push({a,b});
    visited[a][b]=1;
    dis[a][b]=0;
    while(!q.empty()){
        pii p;
        p=q.front(); q.pop();
        int a=p.ff,b=p.ss;
        if(track==cnt) break ;
        for(int i=0;i<4;i++){
          int x=dxx[i]+a,y=dyy[i]+b;
          if(x>=0 && y>=0 && x<n && y<n && !visited[x][y] && s[x][y]!='#'){
            if(s[x][y]>track+'A' && s[x][y]<='Z') continue;
            if(s[x][y]==track+'A'){
              //  cout<<x<<" "<<y<<" "<<dis[a][b]+1<<endl;
               // cout<<char(track+'A')<<" "<<ans+dis[a][b]+1<<endl;
                track++;
                ans+=dis[a][b]+1;
                while(!q.empty()) q.pop();
                q.push({x,y});
                memset(visited,0,sizeof visited);
                memset(dis,0,sizeof dis);
                visited[x][y]=1;
                break;
            }
           // cout<<i<<" "<<a<<" "<<b<<"  "<<x<<" "<<y<<" "<<dis[a][b]+1<<endl;
            visited[x][y]=1;
            q.push({x,y});
            dis[x][y]=dis[a][b]+1;
          }

        }

    }
  //  cout<<track<<" "<<cnt<<endl;
    if(track==cnt) return ans;
    else return -1;
}
int main()
{
    w(t){
        scanf("%d",&n);
        rep(i,n-1) cin>>s[i];
        cnt=0;
        memset(visited,0,sizeof visited);
        memset(dis,0,sizeof dis);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(s[i][j]=='A') a=i,b=j;
                if(s[i][j]>='A' && s[i][j]<='Z') cnt++;
            }

        }
        int ans=bfs(a,b);
        if(ans>-1)
        printf("Case %d: %d\n",++cs,ans);
        else printf("Case %d: Impossible\n",++cs);
    }
}

