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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,c;
string s;

class node{
public:
    int a,b,c;
    string s;
    node(){}
    node(string ch,int l,int m,int n){
        a=l,b=m,c=n;
        s=ch;
    }
    bool operator<(const node& other){
        if(other.a!=a) return other.a<a;
        else if(other.b!=b) return other.b<b;
        else if(other.c!=c) return other.c>c;
        else return other.s>s;
    }
};

int main()
{
    cin>>n;
    vector<node> v;
    rep(i,n-1){
        cin>>s>>a>>b>>c;
        v.pb(node(s,a,b,c));
    }
    sort(v.bg,v.en);
    for(auto it:v){
        cout<<it.s<<endl;
    }
}



