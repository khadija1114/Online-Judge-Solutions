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
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s,c;

int main()
{
    cin>>t;
   // getline(cin,s);
   cin.ignore();
    while(t--){
        getline(cin,s);
        getline(cin,c);
        string a,b;
        for(i=0;i<s.size();i++) if(s[i]!=' ') a+=tolower(s[i]);
        for(i=0;i<c.size();i++)  if(c[i]!=' ') b+=tolower(c[i]);
        sort(a.bg,a.en);
        sort(b.bg,b.en);
        if(a==b) printf("Case %d: Yes\n",++cs);
        else printf("Case %d: No\n",++cs);
    }
}

