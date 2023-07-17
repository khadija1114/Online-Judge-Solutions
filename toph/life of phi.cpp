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
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9,ans,sum,phisum;
int t,j,cs=0,n,a,b,i,phi[N];
string s;

void totient(){
    for(i=0;i<N;i++) phi[i]=i;
    for(i=2;i<N;i+=2){
        phi[i]=i/2;
    }
    for(i=3;i<N;i+=2){
        if(phi[i]==i){
            for(j=i;j<N;j+=i)
                phi[j]-=phi[j]/i;
        }
    }
}

int main()
{
    totient();
    w(t){
        scanf("%d",&n);
        sum=n;
        sum*=(n-1);
        sum/=2;

        phisum=n;
        phisum*=phi[n];
        phisum/=2;

        ans=sum-phisum;
        printf("%lld\n",ans);
    }
}

