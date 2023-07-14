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

const int N=1e5+2;
long long  mod=1000000007;
int t,j,cs=0,n,a,b,i,tree[N],ar[N];

int getsum(int index){
    int sum=0;
    while(index){
        sum=(sum%mod + tree[index]%mod)%mod;
        index-=(index & -index);
    }
    return sum;
}

void update(int index,int value){
    while(index<=n){
        tree[index]=(tree[index]+value)%mod;
        index+=(index & -index);
    }
}
int main()
{
    w(t){
        scanf("%d",&n);
        int Ar[n];
        for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
            Ar[i]=ar[i];
        }
        sort(Ar,Ar+n);
        for(i=0;i<n+2;i++) tree[i]=0;
        map<int,int> map_;
        int cnt=1;
        for(i=0;i<n;i++){
            if(map_[Ar[i]]==0)
                map_[Ar[i]]=cnt++;
        }
        for(i=0;i<n;i++){
            cnt=getsum(map_[ar[i]]-1);
            update(map_[ar[i]],cnt+1);
//            cout<<i<<" ";
//            for(j=1;j<=n;j++) cout<<tree[j]<<" ";
//            cout<<endl;
        }
        printf("Case %d: %d\n",++cs,getsum(n));
    }
}

