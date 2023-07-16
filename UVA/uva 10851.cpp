#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
   // ios
    cin>>n;
    cin.ignore();
   // for(i=1;i<n;i++) cout<<(1<<i)<<" ";
    while(n--){
        string str[10];
        t=0;
        while(getline(cin,s) && s[0]){
            str[t++]=s;
        }
        int col=str[0].size(),row=10;
        for(i=1;i<col-1;i++){
            int ans=0;
            for(j=1;j<row-1;j++){
                if(str[j][i]=='\\')
                    ans+=(1<<(j-1));//cout<<ans<<" ";
            }
            cout<<char(ans);
        }
        cout<<"\n";
    }
}


