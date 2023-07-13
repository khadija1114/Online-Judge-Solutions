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

const int N=1e9+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
    cin>>n;
    int ar[n][n],br[n+1],ans;
    for(i=0;i<2;i++){
        for(j=0;j<n-1;j++)
            cin>>ar[i][j];
    }
    for(i=0;i<n;i++)
        cin>>br[i];
   int ans1=N,temp,ans2=N,sum;
   for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<i;j++){
            sum+=ar[0][j];
        }
        sum+=br[i];
        for(j=i;j<n-1;j++)
            sum+=ar[1][j];

        if(sum<ans1){
            ans1=sum;
            temp=i;
        }
   }
   for(i=0;i<n;i++){
        if(i==temp)
            continue;
        sum=0;
        for(j=0;j<i;j++){
            sum+=ar[0][j];
        }
        sum+=br[i];
        for(j=i;j<n-1;j++)
            sum+=ar[1][j];

       ans2=min(sum,ans2);
   }

   cout<<ans1+ans2<<endl;

}

