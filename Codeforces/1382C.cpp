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
int t,j,cs=0,n,a,b,i,k;
string s,s1;

int main()
{
    w(t){
        cin>>n>>s>>s1;
        vi v; a=n; int x=0;
        for(i=0,j=n-1,k=n-1;j>=0;j-- ){
                x++;
           // cout<<s[i]<<" "<<s1[j]<<" "<<s[k]<<endl;

            if(x&1){
                if(s[i]==s1[j]) {
                v.pb(1);
                v.pb(a);
                a--;
                }
                else {
                v.pb(a);
                a--;
                }
                i++;
            }
            else{
                 if(s[k]!=s1[j]) {
                    v.pb(1);
                    v.pb(a);
                    a--;
                    }
                else {
                    v.pb(a);
                    a--;
                }
                k--;
            }
          //  for(auto it:v) cout<<it<<" ";
          //  cout<<endl;
        }

        cout<<v.size()<<" " ;
        for(auto it:v)
            cout<<it<<" ";
            cout<<endl;
    }
}

