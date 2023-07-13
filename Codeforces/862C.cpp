#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
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
int t,j,cs=0,n,a,b,x,i;
string s;

int main()
{
    cin>>n>>x;
    if(n==2 && x==0){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    if(n==1){
        cout<<x<<endl;
        return 0;
    }
    if(n==2){
        cout<<0<<" "<<x<<endl;
        return 0;
    }
    a=32-__builtin_clz(max(n,x));
    a++;
    a=(1<<a);
    for(i=1;i<=n-3;i++){
        cout<<i<<" ";
        b=int(b^i);
    }
    if(b==x){
        cout<<a<<" "<<2*a<<" "<<int(a^(2*a))<<endl;
    }

    else {
        cout<<0<<" "<<a<<" "<<int(a^b^x)<<endl;
    }
}
