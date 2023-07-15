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
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
    ws(t){
        string s,s1,s2,p;
        cin>>s>>p;
        int ar[26]={},br[26]={};
        a=s.size(),b=p.size();
        char c=p[0]; bool place = true;
        for(i=0;i<a;i++){
            ar[s[i]-'a']++;
        }
        for(i=0;i<b;i++){
            br[p[i]-'a']++;
        }
        i=1;
        while(i<b && p[i]==p[i-1]){
            i++;
        }
        if(p[0]<=p[i]) place=true;
        else place=false;
        for(i=0;i<26;i++){
            a=ar[i]-br[i];
            if('a'+i==p[0] && !place) s1+=p;
            for(j=0;j<a;j++){
                s1+=char('a'+i);
            }
            if('a'+i==p[0] && place) s1+=p;
        }
      cout<<s1<<endl;

    }
}

