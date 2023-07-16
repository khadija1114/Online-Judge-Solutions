#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long  mod=1e9+9,n;
const int N=1e6+2;
int t,i,j,cs=0,a,b;
string s;

int main()
{
    int cnt=0;
    w(t){
        cin>>n;
        if((n&(n-1))==0)
           cnt++;
    }
    cout<<cnt<<endl;
}

