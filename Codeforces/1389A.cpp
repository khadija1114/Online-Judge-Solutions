#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define w(x) scanf("%d",&x);while(x--)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i;

int main()
{
    w(t){
        cin>>n>>a>>b;
        long long ar[n+2]={},sum[n+1]={};
        for(i=1;i<=n;i++)
            cin>>ar[i];
            ll cnt=ar[1];
        for(i=2;i<=a+1;i++){
            if(ar[i]+ar[i-1]>=ar[a]+ar[a+1] && b)
            {
                b--;
                a-=2;
                cnt+=ar[i]+ar[i-1];
            }
            if(a>1) cnt+=ar[i];
        }
        cout<<cnt<<endl;
    }
}
