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

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m, par[N],_rank[N];
string s;
ll a ,b;

class node{
public:
    int u,v,w;
    node(){}
    node(int a,int b,int c){
        u=a,v=b,w=c;
    }
    bool operator<(node &other){
        return w>other.w;
    }
};

int findpar(int a)
{
    if(par[a]==a) return a;
    return par[a]=findpar(par[a]);
}

int main()
{
    scanf("%d%d",&n,&k);
    ll ar[n][k];
    vector<node> v;
    for(i=0;i<n;i++){
        par[i]=i;
        _rank[i]=1;
        for(j=0;j<k;j++){
           scanf("%lld",&ar[i][j]);
        }
    }
    priority_queue<pii> pq;
    for(j=1,i=0;j<n;j++){
        int cnt=0;
        rep(m,k-1)
            cnt+=abs(ar[i][m]-ar[j][m]);
        v.pb(node(i,j,cnt));
        pq.push({-cnt,j});
    }
    i=pq.top().ss;
    pq.pop();
    cout<<i<<endl;
    for(j=1;j<n;j++){
        if(i==j) continue;
        int cnt=0;
        rep(m,k-1)
            cnt+=abs(ar[i][m]-ar[j][m]);
        v.pb(node(i,j,cnt));
        pq.push({-cnt,j});
    }
    i=pq.top().ss;
    pq.pop();
    cout<<i<<endl;
    for(j=1;j<n;j++){
        if(i==j) continue;
        int cnt=0;
        rep(m,k-1)
            cnt+=abs(ar[i][m]-ar[j][m]);
        v.pb(node(i,j,cnt));
        pq.push({-cnt,j});
    }
    sort(v.bg,v.en);
    ll ans=0;
    for(auto it:v){
        a=findpar(it.u);
        b=findpar(it.v);
     //   cout<<a<<" "<<b<<endl;
        if(a!=b){
            if(_rank[a]<_rank[b]) swap(a,b);
            _rank[a]+=_rank[b];
            par[b]=a;
            ans+=it.w;
        //    cout<<it.u<<" "<<it.v<<" "<<it.w<<endl;
            if(_rank[a]==n) break;
        }
    }
    printf("%lld\n",ans);
}



