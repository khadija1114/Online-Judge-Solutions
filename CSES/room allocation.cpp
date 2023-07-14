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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k=1,m;
string s;

class node{
public:
    int a,b,c;
    node(){}
    node(int u,int v,int w){
        a=u,b=v,c=w;
    }
    bool operator<(const node& other){
        if(a!=other.a) return a<other.a;
        return b<other.b;
    }
};

int main()
{
    cin>>n;
    vector<node> v;
    rep(i,n-1){
        cin>>a>>b;
        v.pb(node(a,b,i));
    }
    sort(v.bg,v.en);
    vi ans(n);
    priority_queue<pii> pq;

    for(auto it:v){
        a=it.a,b=it.b,i=it.c;
       // cout<<a<<" "<<b<<endl;
        if(pq.empty() || -pq.top().ff>=a){
            m=k++;
        }
        else{
            m=pq.top().ss;
            pq.pop();
        }
        ans[i]=m;
        pq.push({-b,m});
    }
    cout<<k-1<<endl;
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;
}



