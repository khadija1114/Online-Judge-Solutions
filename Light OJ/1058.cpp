#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9,a,b;
int t,j,cs=0,n,i;
string s;

struct  map_{
public:
    int x, y;
    bool operator == (const map_ &a)const{
        return (a.x==this->x) && (a.y==this->y) ;
    }
}ans[N];

bool cmp(map_ a, map_ b){
    if(a.x!=b.x)
        return a.x>b.x;
    return a.y>b.y;
}
int main()
{
    w(t){
        scanf("%d",&n);
        int xx[n],yy[n],c=0;
        struct map_  p;
        for(i=0;i<n;i++){
        scanf("%d%d",&xx[i],&yy[i]);
        }
        map<pair<int ,int >,int> cnt;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){

                p.x=(xx[i]+xx[j]);
                p.y=(yy[i]+yy[j]);
                ans[c++]=p;
            }
        }
        int  solve=0;
        sort(ans,ans+c,cmp);
        int k=1;
        for(i=0;i<c;i++){
            if(ans[i]==ans[i+1])
                k++;
            else{
                solve+=k*(k-1)/2;
                k=1;
            }
        }
        printf("Case %d: %d\n",++cs,solve);
        }

}

