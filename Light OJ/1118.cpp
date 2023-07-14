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


int main()
{
    w(t){
        double x1,x2,r1,r2,y1,y2,area,a,b,theta;

        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&r1,&x2,&y2,&r2);

        if(r1<r2){
            swap(x1,x2);
            swap(y1,y2);
            swap(r1,r2);
        }
        a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

        if(a>=r1+r2){
            printf("Case %d: 0\n",++cs);
            continue;
        }
        else if(a>abs(r1-r2)){
        theta=acos((r1*r1+a*a-r2*r2)/(2*r1*a));
        area=r1*r1*(2*theta)/2 - 0.5*sin(2*theta)*r1*r1;

        theta=acos((r2*r2+a*a-r1*r1)/(2*r2*a));
        area+=r2*r2*(2*theta)/2-0.5*sin(2*theta)*r2*r2;

        printf("Case %d: %0.8lf\n",++cs,area);

        }
         else {
                r1=min(r1,r2);
            printf("Case %d: %0.8lf\n",++cs,r1*r1*pi);
            continue;
        }

    }
}

