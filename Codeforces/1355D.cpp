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
const int N=100000;
int t,i,j,cs=0,n,a,b,s;


int main()
{
    cin>>n>>s;
    if(s>=2*n){
        cout<<"YES"<<"\n";
        for(i=0;i<n-1;i++){
            cout<<2<<" ";
            s-=2;
        }
        cout<<s<<"\n"<<1<<"\n";
    }
    else{
        cout<<"NO"<<endl;
    }
}


