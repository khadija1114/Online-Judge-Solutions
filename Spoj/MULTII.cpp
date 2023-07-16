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

const int N=10005;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
bool vis[N],br[15];
queue<pair<string,int>> q;
string ans;

void allclear()
{
    rep(i,n+1){
        vis[i]=0;
    }
    rep(i,10){
        br[i]=0;
    }
   while(!q.empty()) q.pop();

}

bool  bfs()
{
    while(!q.empty()){
        a=q.front().ss;
        string s=q.front().ff;
        if(a%n==0){
            ans=s;
            return true;
        }
        //cout<<a<<" "<<s<<endl;
        q.pop();
        for(int i=0;i<10;i++){
            if(!br[i]){
                int x=a;
                x=(x*10+i)%n;
                if(!vis[x]){
                    vis[x]=true;
                    q.push({s+char(i+'0'),x});
                }
            }
        }
    }
    return false;
}
int main()
{
    while(scanf("%d%d",&n,&m)==2 ){
        allclear();
        rep(i,m-1){
            scanf("%d",&a);
            br[a]=1;
        }

        for(i=1;i<10;i++)
            if(!br[i]){
                string s;
                char ch=i+'0';
                s+=ch;
                q.push({s,i});
                vis[i]=1;
           //     cout<<i<<" "<<s<<endl;
            }

        if(!bfs()){
            printf("Case %d: -1\n",++cs);
        }
        else{
             printf("Case %d: ",++cs);
             cout<<ans<<endl;
        }

    }

}

