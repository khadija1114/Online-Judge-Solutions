#include<bits/stdc++.h>
#define mt make_tuple
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e3+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dx[]={1,0,0,-1},dy[]={0,-1,1,0},k,m;
bool vis[N][N],ans;
string s[N],ch;

void bfs(int x,int y)
{
    queue<tuple<int,int,string>> q;
    q.push(mt(x,y,ch));
    vis[x][y]=true;
    tuple<int,int,string> tp;
    while(!q.empty()){
        tp=q.front();
        x=get<0>(tp),y=get<1>(tp);
        ch=get<2>(tp);
      //  cout<<x<<" "<<y<<" "<<ch<<endl;
        q.pop();
        if(s[x][y]=='B'){
            ans=true;
            return ;
        }
        if(x+1<n && s[x+1][y]!='#' && !vis[x+1][y]){
            q.push(mt(x+1,y,ch+'D'));
            vis[x+1][y]=true;
        }
        if(y-1>=0 && s[x][y-1]!='#' && !vis[x][y-1]){
            q.push(mt(x,y-1,ch+'L'));
            vis[x][y-1]=true;
        }
        if(y+1<m && s[x][y+1]!='#' && !vis[x][y+1]){
            q.push(mt(x,y+1,ch+'R'));
            vis[x][y+1]=true;
        }
        if(x-1>=0 && s[x-1][y]!='#' && !vis[x-1][y]){
            q.push(mt(x-1,y,ch+'U'));
            vis[x-1][y]=true;
        }
    }
    return ;
}
int main()
{
    scanf("%d%d",&n,&m);
    rep(i,n) cin>>s[i];

    rep(i,n){
        rep(j,m){
            if(s[i][j]=='A'){
                bfs(i,j);
                break;
            }
        }
    }

    if(ans) cout<<"YES"<<endl<<ch.size()<<endl<<ch<<endl;
    else cout<<"NO"<<endl;
}



