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

const int N=1e6+2, mod=1e9+9;
int t,j,cs=0,n,a,b,i,ar[N],mx,m;
string s;

int cont(int value){
    int pre=0,cnt=1,i;
    for(i=0;i<n;i++){
       // if(ar[i]>value) return mod;
        if(pre+ar[i]<=value) pre+=ar[i];
        else{
            pre=ar[i];
            cnt++;
        }
    }
    return cnt;
}

int solve(){
    int low=mx,high=mod,mid,i;
    for(i=0;i<100;i++){
        mid=(low+high)/2;
        if(cont(mid)<=m)
            high = mid;
        else
            low=mid+1;
    }
    return mid;
}
int main()
{
    w(t){
        mx=0;
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
            mx=max(mx,ar[i]);
        }
        printf("Case %d: %d\n",++cs,solve());
    }
}

