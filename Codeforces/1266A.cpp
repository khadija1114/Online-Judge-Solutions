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
    ws(t){
        cin>>s;
        bool ev=false,z=false,div=false;
        int sum=0;
        for(i=0;i<s.size();i++){
            sum+=s[i]-'0';
            //if(s[i]=='0') z=true;
            if(s[i]%2==0){
                if(s[i]=='0'){
                    if(z) ev=true;
                    else z=true;
                }
                else ev=true;
            }
        }
        if(sum%3==0) div=true;
        if(div&&ev&&z) cout<<"red";
        else cout<<"cyan";
        cout<<endl;

    }
}

