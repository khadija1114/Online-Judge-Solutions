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

const int N=25;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,ans;
bool visited[N][N];
string s[N];

int bfs(int u,int v){
    memset(visited,0,sizeof (visited));
    queue<pii> q;
    q.push({u,v});
    visited[u][v]=1;
    int cnt=1;
    while(!q.empty()){
        pii p = q.front();
        q.pop();
        int x=p.ff,y=p.ss;
        for(int i=0;i<4;i++){
            if(x+dxx[i]<a && x+dxx[i]>=0 && y+dyy[i]<b && y+dyy[i]>=0 && !visited[x+dxx[i]][y+dyy[i]] && s[x+dxx[i]][y+dyy[i]]!='#'){
                visited[x+dxx[i]][y+dyy[i]]=1;
                cnt++;
                q.push({x+dxx[i],y+dyy[i]});
            }
        }
    }
    return cnt;
}
int main()
{
    w(t){
        scanf("%d%d",&b,&a);
        rep(i,a-1) cin>>s[i];
        for(i=0;i<a;i++){
            for(j=0;j<b;j++)
                if(s[i][j]=='@'){
                     ans= bfs(i,j);
                     break;
                }

        }
        printf("Case %d: %d\n",++cs,ans);
    }
}

