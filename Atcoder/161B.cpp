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
int t,i,j,cs=0,n,m,a,b;
string s;

int main()
{
    ll cost=0,k=0;
    cin>>n>>m;
    ll ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
        cost+=ar[i];
    }
    ll in=4*m;
    sort(ar,ar+n);
    for(i=n-1;i>=0;i--){
        if(ar[i]*in>=cost){
            k++;
          //  cout<<ar[i]<<" ";
        }

        else{
            break;
        }
    }
    if(k>=m)
        cout<<"Yes";
    else
        cout<<"No";
    cout<<endl;

}



