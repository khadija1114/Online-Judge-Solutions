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
        long long a,b,c,d,into,e,need;
        cin>>a>>b>>c>>d;
        need=a-b;
        if(need<=0){
            cout<<b<<endl;
            continue;
        }
        e=c-d;
        if(e<=0){
            cout<<-1<<endl;
            continue;

        }
        into=ceil(1.0*need/e);
        long long ans=b+c*into;
        cout<<ans<<endl;

    }
}


