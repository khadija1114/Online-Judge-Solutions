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

const int N=105;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,c,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,rank_[N],par[N];
string s,s1;

class node{
public:
    int u,v,w;
    node(){}
    node(int a , int b,int c){
        u=a;
        v=b;
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
        int k=1,ans=0,a;
        vector<node> adj;
        map<string,int>map_;
        rep(i,n-1){
            cin>>s>>s1>>c;
            //cout<<1<<endl;
            if(!map_[s]) map_[s]=k++;
            if(!map_[s1]) map_[s1]=k++;
            adj.pb(node(map_[s],map_[s1],c));
        }
        rep(i,k){
            par[i]=i;
            rank_[i]=1;
           // cout<<i<<endl;
        }
        sort(adj.bg,adj.en);
        for(auto it:adj){
            if(findpar(it.u)!=findpar(it.v)){
                ans+=it.w;
                union_(it.u,it.v);
            }
        }
        //cout<<k<<" "<<*max_element(rank_,rank_+N)<<endl;
        k--;
        a=findpar(1);
        if(rank_[a]==k){
            printf("Case %d: %d\n",++cs,ans);
        }
        else
            printf("Case %d: Impossible\n",++cs);
    }
}

