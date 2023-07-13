#include<bits/stdc++.h>
#define mod 1e9+9
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=100000;
int t,i,j,cs=0;
string s;
int main()
{
   w(t){
    long long int n,ans;
    cin>>n;
    if(n<3) ans=0;
      else if(n&1) ans=n/2;
        else ans=n/2 -1;

        cout<<ans<<endl;

   }
}


