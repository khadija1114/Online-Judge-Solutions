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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    w(t){
        scanf("%d%d%d",&n,&m,&k);
        vi v[n];
        bool ar[m+1]={};
        for(i=0;i<n;i++){
            for(j=0;j<k;j++){
                scanf("%d",&a);
                v[i].pb(a);
            }
        }
        scanf("%d",&a);
        rep(i,a-1){
            scanf("%d",&b);
            ar[b]=true;
        }
        bool ans=true;
       // for(auto it:ar) cout<<it<<endl;
        for(i=0;i<n && ans;i++){
            a=0;
            for(j=0;j<k;j++){
              if(v[i][j]>0){
                if(ar[v[i][j]]) a++;
              }
              else{
                if(!ar[-v[i][j]]) a++;
              }
            }
            if(a==0) ans=false;
        }
        if(ans) printf("Case %d: Yes\n",++cs);
        else printf("Case %d: No\n",++cs);

    }
}

