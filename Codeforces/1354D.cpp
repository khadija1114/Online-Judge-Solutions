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


const int N=1e6+1;
int t,i,j,cs=0,n,a,b,q;
int v[N],k[N];

int count_func(int x){
    int cnt=0;
    for(i=0;i<n;i++)
        if(v[i]<=x)
        cnt++;
    for(i=0;i<q;i++){
        if(k[i]>0 && k[i]<=x)
            cnt++;
        else if(k[i]<0 && abs(k[i])<=cnt)
            cnt--;
    }
    return cnt;

}
int main()
{
    scanf("%d%d",&n,&q);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<q;i++){
       scanf("%d",&k[i]);
    }
    if(count_func(N)==0){
       printf("0\n");
        return 0;
    }

    int l=0,r=N,mid;
    while(r-l>1){
        mid=(r+l)/2;
        if(count_func(mid)>0)
            r=mid;
        else
            l=mid;
    }
    printf("%d\n",r);

}


