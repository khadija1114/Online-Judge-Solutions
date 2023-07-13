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
int t,i,j,cs=0,n,a,m,b,q;
int v[N],k[N];


int main()
{
    w(t){
        int a,b,n;
        cin>>a>>b>>n;
         int x=(a+b)/2;
        if( n<=x ){
            cout<<2 <<endl;
        }
        else{
            double ans=1/(1-2.0*(a-n)/(a-b));
            m=round(ans);
            cout<<m<<endl;
        }
    }

}




