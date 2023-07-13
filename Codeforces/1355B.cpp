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
    w(t){
        cin>>n;
        int ans=0,ar[n+1];
        rep(i,0,n-1){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int cnt=1;
        rep(i,0,n-1){
            if(cnt++>=ar[i]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}


