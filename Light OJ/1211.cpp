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
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,c,d,e,f,i,xh,xl,yh,yl,zh,zl;
string s;

int main()
{
    w(t){
        scanf("%d",&n);
        scanf("%d%d%d%d%d%d",&xl,&yl,&zl,&xh,&yh,&zh);
        n--;
        while(n--){
            scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
            xl=max(xl,a);
            yl=max(yl,b);
            zl=max(zl,c);
            xh=min(xh,d);
            zh=min(zh,f);
            yh=min(yh,e);
        }

        int ans=(xh-xl)*(yh-yl)*(zh-zl);
        printf("Case %d: %d\n",++cs,ans<0? 0:ans);

    }
}

