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

const int N=100001;
int t,i,j,cs=0,a,b;
string s;
int main()
{
    w(t)
    {
        long long n;
        cin>>n;
        for(i=2;i<n;i++){
            if(n%((1<<i)-1)==0){
                cout<<n/((1<<i)-1)<<endl;
                break;
            }
        }
    }
}


