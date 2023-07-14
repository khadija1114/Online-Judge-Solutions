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
int t,j,cs=0,n,i;
double r1,r2,h,p,R,v;
string s;

int main()
{
    w(t){
        scanf("%lf%lf%lf%lf",&r1,&r2,&h,&p);
        R=r2+(r1-r2)*p/h;
        v=pi*(r2*r2+R*R+R*r2)*p/3;
        printf("Case %d: %0.8lf\n",++cs,v);
    }
}

