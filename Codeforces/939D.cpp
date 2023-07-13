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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,par[30];
string s,s1;
int find_(int a){
    if(par[a]==a) return a;
    return par[a]=find_(par[a]);
}
void union_(int a,int b){
    a=find_(a);b=find_(b);
    par[a]=b;
}
int main()
{
    cin>>n>>s>>s1;
    for(i=0;i<27;i++) par[i]=i;
    vector<pair<char,char>> map_;
    rep(i,n-1){

        if(find_(s[i]-'a')!=find_(s1[i]-'a')){
           // cout<<i<<" "<<find_(s[i]-'a')<<" "<<find_(s1[i]-'a')<<endl;
            union_(s[i]-'a',s1[i]-'a');
            map_.pb({s[i],s1[i]});
        }
    }
    cout<<map_.size()<<endl;
    for(auto it:map_) cout<<it.ff<<" "<<it.ss<<endl;
}

