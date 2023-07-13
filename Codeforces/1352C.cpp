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
int t,i,j,cs=0,a,b;
string s;

int main()
{
    long long n,k;
    w(t){
        cin>>n>>k;
        if(n>k){
            cout<<k<<endl;
            continue;
        }
        if(n==k){
            cout<<n+1<<endl;
            continue;
        }
        b=k;
        int ans=k,r,a=1;

        while(a){
                a=k/n;
                r=k%n;
                ans+=a;
                k=a+r;
           // cout<<ans<<endl;

        }


        cout<<ans<<endl;


    }

}


