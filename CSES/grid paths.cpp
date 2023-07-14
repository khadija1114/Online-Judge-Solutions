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

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k=100,m,cnt;
string s;
bool vis[10][10];

void solve(int x,int y,int pos)
{
    if(x>2 || x<0 || y<0 || y>2) return ;
    if(vis[x][y]) return ;
    if(x==2 && y==2){
        if(pos==8) cnt++;
        return ;
    }
    if(pos==8) return ;
    vis[x][y]=true;
    cout<<x<<" "<<y<<" "<<pos<<endl;
    if(s[pos]!='?'){
        char ch=s[pos];
        if(ch=='R'){
            solve(x,y+1,pos+1);
        }
        else if(ch=='L'){
            solve(x,y-1,pos+1);
        }
        else if(ch=='U'){
            solve(x-1,y,pos+1);
        }
        else{
            solve(x+1,y,pos+1);
        }
    }
    else{
        for(int i=0;i<4;i++){
            solve(x+dxx[i],y+dyy[i],pos+1);
        }
    }
    vis[x][y]=false;
}

int main()
{
    cin>>s;
    solve(0,0,0);
    cout<<cnt<<endl;
}



