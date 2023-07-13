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
    w(t){
        string s;
        for(i=0;i<55;i++){
        s+='a';
    }
        cin>>n;
        int ar[n+1];
        int mx=0;
        for(i=1;i<n+1;i++){
            cin>>ar[i];
          //  mx=max(mx,ar[i]);
        }
        a=1;

       if(ar[1]==0) {
        for(i=0;i<55;i++) cout<<'z';
         cout<<endl;
       }
        else   cout<<s.substr(0,ar[0])<<endl;
     //   cout<<s<<endl;
        for(i=1;i<n+1;i++){
               // if(ar[i]!=ar[i-1] || ar[i]!=0){
                for(j=ar[i];j<s.size();j++)
                {
                    if(s[j]=='z') {
                        s[j]='a';
                    }
                    else s[j]++;
                }
             //   }
            cout<<s<<endl;
        }
    }
}
