#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long int mod=1e9+9;
const int N=100000;
int t,i,j,cs=0,n,a,b;
string s;

int main()
{
    w(t){
        scanf("%d",&n);
        long long a[n],b[n];
        rep(i,0,n-1)
            scanf("%lld%lld",&a[i],&b[i]);
        if(n==1)
            printf("%lld\n",a[0]);

        long long cur[n],extra=0,mn=1e18;
        cur[0]=a[0]-max(a[0]-b[n-1],0LL);
        extra=max(a[0]-b[n-1],0LL);
        rep(i,1,n-1){
            cur[i]=a[i]-max(a[i]-b[i-1],0LL);
            extra+=max(a[i]-b[i-1],0LL);
        }
        rep(i,0,n-1)
        mn=min(mn,cur[i]);
          printf("%lld\n",mn+extra);
    }
}


