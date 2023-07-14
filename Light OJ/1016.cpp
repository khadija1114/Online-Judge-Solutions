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
        scanf("%d%d",&n,&k);
        a=0;
        int ar[n];
        rep(i,n-1){
            scanf("%d%d",&b,&ar[i]);
        }
        sort(ar,ar+n);
        i=0;
        while(i<n){
            j=i;
            while(abs(ar[i]-ar[j])<=k && i<n){
              //  cout<<ar[i]<<" ";
                i++;
            }
          //  cout<<endl;
            a++;
        }
        printf("Case %d: %d\n",++cs,a);
    }
}

