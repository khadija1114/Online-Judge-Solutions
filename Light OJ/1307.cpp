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

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,ar[3000];
string s;

int tri(int i,int j){
   int low = 0, high = j - 1, mid;

            while(low <= high)
            {
                mid = (low+high)/2;

                if( ar[mid] + ar[j] > ar[i] )
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }

    return (j-low);
}
int main()
{
    w(t){
        scanf("%d",&n);
       int ans=0,k;
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);

        sort(ar,ar+n);
     //   for(i=0;i<n;i++) cout<<ar[i]<<" ";
       // cout<<endl;
        for(i=n-1;i>=2;i--){
            for(j=i-1;j>=1;j--){
                ans+=tri(i,j);
             //   cout<<ar[i]<<" "<<ar[j]<<" "<<tri(i,j)<<endl;
            }

        }
        printf("Case %d: %d\n",++cs,ans);
    }
}

