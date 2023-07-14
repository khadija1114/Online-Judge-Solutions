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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,dis[N],c,inf=10000,ar[N];

class node{
public:
    int u,v,w;
    node(){}
    node(int a,int b,int c){
        u=a,v=b,w=c;
    }
};

vector<node> edge;
void clear_(){
    for(i=0;i<=n;i++){
        dis[i]=inf;
    }
    dis[1]=0;
    edge.clear();
}

void belman_ford(){
    for(i=1;i<n;i++){
        for(auto it:edge){
            if(dis[it.u]!=inf) dis[it.v]=min(dis[it.v],dis[it.u]+it.w);
        }
    }
}

int main()
{
    w(t){
        scanf("%d",&n);
        clear_();
        for(i=1;i<=n;i++) scanf("%d",&ar[i]);
        w(m){
            scanf("%d%d",&a,&b);
            c=ar[b]-ar[a];
            edge.pb(node(a,b,c*c*c));
        //    cout<<m<<endl;
        }
        belman_ford();
        printf("Case %d:\n",++cs);
        w(m){
            scanf("%d",&a);
            if(dis[a]>2 && dis[a]<inf) printf("%d\n",dis[a]);
            else printf("?\n");
        }
    }
}

