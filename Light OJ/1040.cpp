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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,par[N],rank_[N],c;
string s;

class node{
public:
    int u,v,w;
    node(){}
    node(int a,int b,int c){
        v=a;
        u=b;
        w=c;
    }
    bool operator<(node const& other){
        return w<other.w;
    }
};

int findpar(int a){
    if(par[a]==a) return a;
    return par[a]=findpar(par[a]);
}

void union_(int a,int b){
    a=findpar(a);
    b=findpar(b);
    if(rank_[a]<rank_[b]) swap(a,b);
    par[b]=a;
    rank_[a]+=rank_[b];
}
int main()
{
    w(t){
        scanf("%d",&n);
        vector<node> adj;
        int ans=0;
        rep(i,n-1){
            rep(j,n-1){
                scanf("%d",&a);
                if(a)
                    adj.pb(node(i,j,a));
            }
        }
        sort(adj.bg,adj.en);
        rep(i,n){
            par[i]=i;
            rank_[i]=1;
        }
        for(auto it:adj){
            if(findpar(it.u)!=findpar(it.v)){
                union_(it.u,it.v);
            }
            else{
                ans+=it.w;
            }
        }
        a=findpar(0);
        if(rank_[a]==n) printf("Case %d: %d\n",++cs,ans);
        else printf("Case %d: -1\n",++cs);
    }
}

