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
int t,i,j,cs=0,n,a,b;

int main()
{
  w(t){
    string s;
    cin>>n>>a>>b;
    for(i=0;i<n/b;i++ ){
        for(j=0;j<b;j++){
            s+='a'+j;
        }
    }
    if(n%b!=0){
            b=n%b;
        for(j=0;j<b;j++){
            s+='a'+j;
        }
    }
    cout<<s<<endl;
  }

}


