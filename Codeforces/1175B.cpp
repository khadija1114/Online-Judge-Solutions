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

long long  mod=1e9+9,ans=0,b, N=(1LL<<32)-1;
int t,cs=0,n,i,j;
string s;

int main()
{
    string f="for",e="end",a="add";
    bool fl=true;
    cin>>n;
    stack<ll> q,into;
    into.push(1);
    cin.ignore();
    while(n--){
        cin>>s;
        if(fl){
        if(s==f ){
            cin>>b;
            q.push(b);
            b*=into.top();
            if(b>N) b=10*N;
            into.push(b);
        }
        else if(s==a){

            ans+=into.top();
            if(ans>N)
                fl=false;
        }
        else{
            into.pop();
            q.pop();
            }
        }
      //  cout<<ans<<endl;
    }
    if(ans>N) cout<<"OVERFLOW!!!"<<endl;
    else cout<<ans<<endl;
}

