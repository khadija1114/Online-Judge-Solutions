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

const int N=205;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,par[N],rank_[N],c,cnt,ans;
string s;

class node{
public:
    int u,v,w;
    node(){}
    node(int a,int b,int c){
        u=a,v=b,w=c;
    }
    bool operator<(node const& other){
        return w<other.w;
    }
};

int findpar(int a){
    return par[a]=(par[a]==a)? a : findpar(par[a]);
}
int main()
{
    w(t){
        scanf("%d%d",&n,&m);
        printf("Case %d:\n",++cs);
        vector<node> adj,temp;
        while(m--){
            scanf("%d%d%d",&a,&b,&c);
            adj.pb(node(a,b,c));
            cnt=0,ans=0;
            sort(adj.bg,adj.en);
            rep(i,n){
                par[i]=i;
                rank_[i]=1;
            }
            for(auto it:adj){
                a=it.u,b=it.v,c=it.w;
                a=findpar(a);
                b=findpar(b);
                if(a!=b){
                    if(rank_[a]<rank_[b]) swap(a,b);
                    rank_[a]+=rank_[b];
                    par[b]=a;
                    cnt=rank_[a];
                    ans+=c;
                    temp.pb(it);
                }
            }
            if(cnt==n) printf("%d\n",ans);
            else printf("-1\n");
            adj.clear();
            adj=temp;
            temp.clear();
        }
    }
}

