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
int t,j,i,cs=0;
double n,l,c,angle,r,cord,arc,ans,eps=1e-10;
string s;

double solve(){
    double low=0,high=1e10,mid,arc=(1+n*c)*l;;
    while(low<high){
        mid=(high+low)/2;
        angle=arc/mid;
        cord=2*mid*sin(angle/2);
        if(abs(cord-l)<=eps){
            break;
        }
        else if(cord>l){
            high=mid;
        }
        else
            low=mid;
    }
    return mid-mid*cos(angle/2);
}
int main()
{
    w(t){
        scanf("%lf%lf%lf",&l,&n,&c);
        printf("Case %d: %0.8lf\n",++cs,solve());
    }
}

