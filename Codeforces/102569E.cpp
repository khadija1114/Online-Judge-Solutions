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
int t,i,j,cs=0,n,a,b;
string s;

int main()
{
    cin>>n;
    long long ans[n+2]={},ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    ans[0]=ar[0];
    long long mn=ar[0];
    for(i=1;i<n;i++){
        ar[i]+=ar[i-1];
    }
    long long m=*min_element(ar,ar+n);
    if(m>=0) cout<<0<<endl;
    else cout<<-m<<endl;
}



