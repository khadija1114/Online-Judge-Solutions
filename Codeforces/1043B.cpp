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
int t,i,j,cs=0,n,a,b,d;
string s;

int main()
{
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=n-1;i>0;i--){
        ar[i]=ar[i]-ar[i-1];
    }

    vi v;
    for(d=1;d<n;d++){
       bool flag=true;
        for(j=0;j+d<n;j++){
            if(ar[j]!=ar[j+d]){
                flag=false;
                break;
            }

        }
        if(flag){
            v.pb(d);
        }
    }
    v.pb(n);

    cout<<v.size()<<endl;
    for(auto it:v) cout<<it<<" ";
    cout<<endl;
}


