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

const int N=1002;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dis[N][N],m,init_x,init_y,k;
bool visited[N][N];
string s,grp[N];

bool dfs(int x, int y, int len){
    if(len==0 && x==init_x && y==init_y)
        return true;
    bool flag=false;
    if(x+1<n && visited[x+1][y] && dis[x+1][y]<=len){
        s+='D';
        flag=dfs(x+1,y,len-1);
    }
    if(!flag && y>0 && visited[x][y-1] &&dis[x][y-1]<=len ){
        s+='L';
        flag=dfs(x,y-1,len-1);
    }
    if(!flag && y+1<m && visited[x][y+1] && dis[x][y+1]<=len){
        s+='R';
        flag=dfs(x,y+1,len-1);
    }
    if(!flag && x>0 && visited[x-1][y] && dis[x-1][y]<=len){
        s+='U';
        flag = dfs(x-1,y,len-1);
    }
    return flag;
}

void bfs(int x,int y){
    visited[x][y]=1;
    dis[x][y]=0;
    queue<pair<int,int>> q;
    pair<int,int> p;
    q.push(mp(x,y));
    while(!q.empty()){
        p=q.front();
        q.pop();
        int a=p.ff,b=p.ss;
        if(a+1<n && !visited[a+1][b] && grp[a+1][b]!='*'){
            visited[a+1][b]=true;
            dis[a+1][b]=dis[a][b]+1;
            q.push(mp(a+1,b));
        }
        if(a>0 && !visited[a-1][b] && grp[a-1][b]!='*'){
            visited[a-1][b]=true;
            dis[a-1][b]=dis[a][b]+1;
            q.push(mp(a-1,b));
        }
       if(b+1<m && !visited[a][b+1] && grp[a][b+1]!='*'){
            visited[a][b+1]=true;
            dis[a][b+1]=dis[a][b]+1;
            q.push(mp(a,b+1));
        }
        if(b>0 && !visited[a][b-1] && grp[a][b-1]!='*'){
            visited[a][b-1]=true;
            dis[a][b-1]=dis[a][b]+1;
            q.push(mp(a,b-1));
        }
    }
    return ;
}
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    for(i=0;i<n;i++){
        cin>>grp[i];
    }
    if(k&1){
        printf("IMPOSSIBLE\n");
        return 0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(grp[i][j]=='X'){
                init_x=i;init_y=j;
                break;
            }
        }
    }
    bfs(init_x,init_y);
    bool ans=dfs(init_x,init_y,k);
    if(ans){
        cout<<s<<endl;
    }
    else{
         printf("IMPOSSIBLE\n");
    }

}

