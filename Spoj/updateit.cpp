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
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,c,q,u;
string s;

int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&u);
        int ar[n]={};
        while(u--){
            scanf("%d%d%d",&a,&b,&c);
            ar[a]+=c;
            if(b<n)ar[b+1]-=c;
        }
        for(i=1;i<n;i++)
            ar[i]+=ar[i-1];
        scanf("%d",&q);
        while(q--){
            scanf("%d",&a);
            printf("%d\n",ar[a]);
        }
   }
}



