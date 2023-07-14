#include<bits/stdc++.h>
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

const int N=1e4+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,vis[N][N];
string s[1005];

void dfs(int x,int y){
    vis[x][y]=true;
    for(int i=0;i<4;i++){
        int xx=x+dxx[i],yy=y+dyy[i];
        if(xx>=0 && xx<n && yy>=0 && yy<m && s[xx][yy]=='.' && !vis[xx][yy]){
            dfs(xx,yy);
        }
    }
    return ;
}

int main()
{
    cin>>n>>m;
    rep(i,n-1) cin>>s[i];
    int ans=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(!vis[i][j] && s[i][j]=='.'){
                ans++;
                dfs(i,j);
            }
        }
    }
    cout<<ans<<endl;
}



