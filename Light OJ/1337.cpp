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

const int N=505;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,dis[N][N],cnt,q,m;
char s[N][N],ch;
bool visited[N][N];

void dfs(int x,int y){
    visited[x][y]=1;
    if(s[x][y]=='C') cnt++;

    for(int i=0;i<4;i++){
        int xx=dxx[i]+x,yy=dyy[i]+y;
        if(xx>=0 && xx<n && yy>=0 && yy<m && s[xx][yy]!='#' && !visited[xx][yy]){
            dfs(xx,yy);
        }
    }
    return ;
}

int main()
{
    w(t){
        scanf("%d%d%d ",&n,&m,&q);
        memset(dis,-1,sizeof dis);
        for(int i=0;i<n;i++)
        cin>>s[i];
        printf("Case %d:\n",++cs);
        while(q--){
            scanf("%d%d",&a,&b);
            a--;b--;
            if(dis[a][b]!=-1) printf("%d\n",dis[a][b]);
            else{
                cnt=0;
                memset(visited,0,sizeof visited);
                dfs(a,b);
                for(int k=0;k<n;k++){
                    for(int l=0;l<m;l++){
                        if(visited[k][l]){
                            dis[k][l]=cnt;
                        }
                    }
                }
                printf("%d\n",cnt);
            }

        }

    }
}

