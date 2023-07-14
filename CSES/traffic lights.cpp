#include<bits/stdc++.h>
#define mt make_tuple
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
typedef tuple<int,int> tii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    set<tii> s,t;
    scanf("%d",&a);
    s.insert(mt(a,a));
    t.insert(mt(a,a));
    w(n){
        scanf("%d",&m);

        auto it=s.lower_bound(mt(m,0));
        tie(a,b)=*it;
        s.erase(it);
        s.insert(mt(m,m+b-a));
        s.insert(mt(a,a-m));
        t.erase(mt(b,a));
        t.insert(mt(m+b-a,m));
        t.insert(mt(a-m,a));
        printf("%d ",get<0>(*(t.rbegin())));
    }
}



