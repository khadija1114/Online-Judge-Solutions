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
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
    w(t){
        cin>>n;
        //int ar[N];
        vi odd,even;
       // bool bl[N]={};
        for(i=0;i<2*n;i++)
            {
                cin>>a;
                if(a&1) odd.pb(i+1);
                else even.pb(i+1);
            }
        int cnt=n-1;
      //  if(odd.size()&1) a=odd.size()-1;
      if(even.size()>1){
       for(i=0;i<even.size()-1 &&cnt;i+=2){
            cout<<even[i]<<" "<<even[i+1]<<endl;
            cnt--;
        }
      }
      if(odd.size()>1){
        for(i=0;i<odd.size()-1 &&cnt;i+=2){
            cout<<odd[i]<<" "<<odd[i+1]<<endl;
            cnt--;
        }
      }
       // if(even.size()&1) a=even.size()-1;


    }
}


