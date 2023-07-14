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
int t,j,cs=0,n,a,b,i;
double x,y,c;
const double eps=1e-7;
string s;

double solve(double mid){
    double h1=sqrt(x*x-mid*mid),h2=sqrt(y*y-mid*mid);
    return (h1*h2)/(h1+h2);
}
int main()
{
    w(t){
        scanf("%lf%lf%lf",&x,&y,&c);
        double st=0,en=min(x,y),mid;
        while(eps<=en-st){
            mid=(st+en)/2.0;
            if(solve(mid)<c) en=mid;
            else st=mid;
         //   cout<<mid<<endl;
        }
        printf("Case %d: %lf\n",++cs,mid);
    }
}

