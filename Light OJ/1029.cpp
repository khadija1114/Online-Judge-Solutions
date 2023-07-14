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

const int N=110;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,par[N],c;
string s;

class graph{
    public:
    int v,w,u;
    graph(){}
    graph(int a,int b,int c) {
        v=a;
        u=b;
        w=c;
    }
    bool operator<(graph const& other){
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
    par[a]=b;
}
int main()
{
    w(t){
        scanf("%d",&n);
        k=0;
        vector<graph>adj;
        while(scanf("%d%d%d",&a,&b,&c)==3 && a+b+c ){
            adj.pb(graph(a,b,c));
        }
        sort(adj.begin(),adj.end());
        int mn=0,mx=0;
        for(i=0;i<=n;i++){
            par[i]=i;
        }
        for(auto it:adj){
            a=it.v,b=it.u,c=it.w;
            if(findpar(a)!=findpar(b)){
                mn+=c;
                union_(a,b);
            }
        }
        reverse(adj.bg,adj.en);
        for(i=0;i<=n;i++)
            par[i]=i;
        for(auto it:adj){
            a=it.v,b=it.u,c=it.w;
            if(findpar(a)!=findpar(b)){
                mx+=c;
                union_(a,b);
            }
        }
        mx+=mn;
        if(mx&1) printf("Case %d: %d/2\n",++cs,mx);
        else printf("Case %d: %d\n",++cs,mx/2);
    }
}


