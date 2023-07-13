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
int t,i,j,cs=0,n,a,b,c;
string s;

int main()
{
    w(t){
        cin>>a>>b>>c;
        vi v;
        if(b==0){
            if(a){
                a++;
                while(a--){
                   v.pb(0);
                }
            }
            else{
                c++;
                while(c--){
                   v.pb(1);
                }
            }
        }
        else{
            for(i=0;i<c;i++)
                v.pb(1);
            for(i=1;i<=b;i++){
                v.pb(i&1);
            }
            if(b&1){
                v.pb(0);
                for(i=1;i<=a;i++){
                    v.pb(0);
                }
            }
            else{
                for(i=1;i<=a;i++){
                    v.pb(0);
                }
                v.pb(1);
            }

        }

        for(auto it: v)
            cout<<it;
        cout<<"\n";
    }
}


