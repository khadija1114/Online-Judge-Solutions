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

const int N=100;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,ans=0,dis[N][N],dxx[]={0,0,-1,1},dyy[]={1,-1,0,0},m;
string ar[N];
bool visited[N][N];

int bfs(){
    queue<pii> q;
    q.push({a,b});
    visited[a][b]=1;
    int cnt=3;
    while(!q.empty()){
        pii p=q.front();
        int x=p.ff,y=p.ss;
        q.pop();
        for(int i=0;i<4;i++){
            if(dxx[i]+x<n && dxx[i]+x>=0 && dyy[i]+y<m && dyy[i]+y>=0
               && !visited[dxx[i]+x][dyy[i]+y] && ar[dxx[i]+x][dyy[i]+y]!='#' && ar[dxx[i]+x][dyy[i]+y]!='m'){
                visited[dxx[i]+x][dyy[i]+y]=1;
                dis[dxx[i]+x][dyy[i]+y]=dis[x][y]+1;
                if(ar[dxx[i]+x][dyy[i]+y]=='a' || ar[dxx[i]+x][dyy[i]+y]=='b' || ar[dxx[i]+x][dyy[i]+y]=='c'){
                    cnt--;
                    ar[dxx[i]+x][dyy[i]+y]='.';
                    if(cnt==0)
                        return dis[dxx[i]+x][dyy[i]+y];
                }
                q.push({dxx[i]+x,dyy[i]+y});
            }
        }
    }
}

int main()
{
    w(t){
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++){
                cin>>ar[i];
        }
         for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                if(ar[i][j]=='h') a=i,b=j;
                visited[i][j]=0;
                dis[i][j]=0;
            }

         printf("Case %d: %d\n",++cs,bfs());
    }
}

