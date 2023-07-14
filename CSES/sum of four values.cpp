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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,x;


class point{
public:
    int f,s,t;
    point(){}
    point(int a,int b,int c){
        f=a,s=b,t=c;
    }
    bool operator<(const point& other)
    {
        return f<other.f;
    }
};

int main()
{
    cin>>n>>x;
    int ar[n];
    vector<point> v;
    rep(i,n-1){
    cin>>ar[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            v.pb(point(ar[i]+ar[j],i+1,j+1));
        }
    }

    sort(v.bg,v.en);
    int sz=v.size();
    for(i=0;i<sz-1;i++){
        int a,b,c,d;
        if(v[i].f*2>x) break;
        a=v[i].s,b=v[i].t;
        auto it=lower_bound(&v[i+1],&v[sz],point(x-v[i].f,0,0));
        c=(*it).s;
        d=(*it).t;
      //  cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        while(a==c||a==d||b==c||b==d){
            it++;
//            if(it==v.en) break;
            c=(*it).s;
            d=(*it).t;
        }

        if(v[i].f+(*it).f==x){
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
            return 0;
        }

    }
    cout<<"IMPOSSIBLE"<<endl;
}



