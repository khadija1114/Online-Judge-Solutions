#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
ll t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    cin>>n;
    ll ar[n];
    rep(i,n-1) cin>>ar[i];
    if(n==1){
        cout<<1<<" "<<1<<endl;
        cout<<-ar[0]<<endl;
         cout<<1<<" "<<1<<endl;
        cout<<ar[0]<<endl;
         cout<<1<<" "<<1<<endl;
        cout<<-ar[0]<<endl;
        return 0;
    }
    cout<<1<<" "<<n<<endl;
    for(i=0;i<n;i++){
        if((n*ar[i]+ar[i])%(n-1)==0){
            cout<<n*ar[i]<<" ";
            ar[i]+=n*ar[i];
        }
        else{
            cout<<-n*ar[i]<<" ";
            ar[i]-=n*ar[i];
        }
    }
    cout<<endl<<2<<" "<<n<<endl;
    for(i=1;i<n;i++){
         cout<<-ar[i]<<" ";
    }
    cout<<endl<<1<<" "<<1<<endl;
    cout<<-ar[0]<<endl;
}

