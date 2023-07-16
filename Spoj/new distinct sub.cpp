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
    getline(cin,s);
    n=s.size();
    vector<string> v;
    string ch,s1;
    for(i=n-1;i>=0;i--){
        s1+=s[i];
        ch=s1;
        reverse(ch.begin(),ch.end());
        v.pb(ch);
    }
   sort(v.begin(),v.end());
   int lps=0,index=0,j=0,ans=0;
   for(i=1;i<n;i++){
        index=0,j=0;
        ch=v[i-1];
       // cout<<v[i]<<" "<<lps<<endl;
        while(v[i][j]==ch[index])
        {
            lps++;
            j++;
            index++;
        }

   }
   ans= n*(n+1)/2 - lps;
   cout<<ans<<"\n";
    }
}

