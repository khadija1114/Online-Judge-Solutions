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

long long int mod=1e9+9,n;
const int N=1000002;
int t,i,j,cs=0,a,b;
double ar[N+2];


int main()
{
    for(i=1;i<N;i++)
        ar[i]=ar[i-1]+log(i);
    w(t){
        scanf("%d%d",&a,&b);
        n=ar[a]/log(b) +1;
        printf("Case %d: %lld\n", ++cs, n);
    }
}


