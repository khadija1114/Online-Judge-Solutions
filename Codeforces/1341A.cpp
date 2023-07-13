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
int t,i,j,cs=0,n,a,b,c,d;
string s;

int main()
{
    w(t){
        cin>>n>>a>>b>>c>>d;
        double x,m,o,y;
        x=a-b;
        y=a+b;
         m=(c-d)*1.0/n;
         o=(c+d)*1.0/n;
        if(( m >= x &&m<=y ) || ( o<=y && o>=x)|| ( m<=x && o>=y)){
            cout<<"YES";
        }
        else cout<<"NO";
        cout<<endl;
    }
}


