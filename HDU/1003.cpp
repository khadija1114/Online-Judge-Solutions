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
const int N=100001;
int t,i,j,cs=0,n,a,b;
string s;

int main()
{
    w(t){
        if(cs) printf("\n");
        scanf("%d",&n);
        int ar[n+1],start=0,end=0,s=0,x=0,sum_here=0,sum_till=0;
        bool bl=true;
        rep(i,0,n-1) {
            scanf("%d",&ar[i]);
            if(ar[i]>0) bl=false;
        }
        if(bl){
            int* y=max_element(ar,ar+n);
            printf("Case %d:\n%d %d %d\n",++cs,*y,y-ar+1,y-ar+1);
            continue;
        }
        rep(i,0,n-1){
            sum_here+=ar[i];
            if(sum_here>sum_till){
                sum_till=sum_here;
                start=s;
                end=i;
            }
            else if(sum_here<0){
                s=i+1;
                sum_here=0;
            }
        }
        printf("Case %d:\n%d %d %d\n",++cs,sum_till,start+1,end+1);
    }
}


