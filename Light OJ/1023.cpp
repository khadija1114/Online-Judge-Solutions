#include<bits/stdc++.h>
#define mod 1e9+9
#define make_pair mp
#define ff first
#define ss second
#define pb push_back
#define w(x) cin>>x;while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

int t,i,j,cs=0,n,k;
string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
    scanf("%d",&t);

    while(t--){
        scanf("%d%d",&n,&k);
        string c=s.substr(0,n);
      //  char ch[n+1];
      //  strcpy(ch,s.c_str());
       // cout<<ch[0]<<ch[1]<<ch[2];
       k--;
       printf("Case %d:\n",++cs);
       do{
            cout<<c<<endl;
       }
        while( next_permutation(c.begin(),c.end()) && k--);

    }


}


