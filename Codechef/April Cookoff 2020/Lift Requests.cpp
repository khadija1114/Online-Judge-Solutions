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

const int N=1000005;
int t,i,j,cs=0,n,a,b,q;

int main()
{
   w(t){
    cin>>n>>q;
   // int ar[2*q+1]={};
    long long int ans=0,c=0;
    for(i=1;i<=q;i++){
        cin>>a>>b;
        ans+=abs(c-a)+abs(a-b);
        c=b;
    }
    cout<<ans<<endl;
   }
}
