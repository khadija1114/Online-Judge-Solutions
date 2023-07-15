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
string s,c;

int main()
{
    w(t){
        cin>>n;
        a=0,b=0;
        for(i=0;i<n;i++){
            cin>>s>>c;
            int x=0,y=0;
            for(j=0;j<s.size();j++){
                x+=s[j]-'0';
            }
            for(j=0;j<c.size();j++){
                y+=c[j]-'0';
            }
            if(x>y) a++;
            else if(x<y) b++;
            else a++,b++;
        }
        if(a>b) cout<<0<<" "<<a<<endl;
        else if(a<b) cout<<1<<" "<<b<<endl;
        else cout<<2<<" "<<a<<endl;


    }
}

