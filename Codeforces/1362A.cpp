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

long long int mod=1e18+1;
const int N=100000;
int t,i,j,cs=0,n,b=sizeof(ll);
ll x,y;
string s;

int main()
{

    w(t){
        cin>>x>>y;
     //   bool ans=true;
        if(x==y){
            cout<<0<<endl;
            continue;
        }
        if(x<y) swap(x,y);
        ll a=x/y;
        int p=__builtin_popcountll(a);
        if(x%y!=0 || a&1 || p>1)
            {
                cout<<-1<<endl;
                continue;
            }

        int cnt=__builtin_clzll(a);
        cnt=b*8-cnt;

        cnt--;
        int c8=cnt/3;
       // cout<<cnt<<endl;
        cnt=cnt%3;
       // cout<<cnt<<" "<<c8<<endl;
        c8+=cnt/2;
        cnt=cnt%2;
      //  cout<<cnt<<" "<<c8<<endl;
        c8+=cnt;
      //  cout<<cnt<<" "<<c8<<endl;
        cout<<c8<<"\n";

    }
}


