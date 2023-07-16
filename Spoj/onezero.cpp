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

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,b,i,a;
string s;

void bfs(){
    pair<string,int> x;
    queue<pair<string,int>> q;
    q.push(mp("1",1));
    while(!q.empty()){
        x=q.front(),q.pop();
        a=x.ss;
        if(a%n==0){
            s=x.ff;
            return ;
        }
        x.ss%=n;
        q.push(mp(x.ff+"0",x.ss*10));
        q.push(mp(x.ff+"1",x.ss*10+1));
    }
}
int main()
{
    ios
    w(t){
        scanf("%d",&n);
        bfs();
        cout<<s<<endl;
    }
}

