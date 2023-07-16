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
int t,i,j,cs=0,n,a,b,carry;
string s1,s2;

int main()
{
    ios
    cin>>t;
    cin.ignore();
    while(t--){
        if(cs) cout<<"\n";
        cin>>s1>>s2;
        vector<int> ans;
        a=s1.size(),b=s2.size(),carry=0;
      //  for(i=0;i<a;i++) s1[i]-='0';
       // for(i=0;i<b;i++) s2[i]-='0';
        for(i=a-1,j=b-1;i>=0&&j>=0;i--,j--){
            n=s1[i]+s2[j]-'0'-'0'+carry;
            carry=n/10;
            ans.pb(n%10);
        }
            if(j>=0){
                for( ;j>=0;j--){
                    n=s2[j]-'0'+carry;
                    carry=n/10;
                     ans.pb(n%10);
                }
            }
            else if(i>=0){
                for( ;i>=0;i--){
                    n=s1[i]-'0'+carry;
                    carry=n/10;
                     ans.pb(n%10);
                }
            }
        if(carry!=0){
            ans.pb(carry);
        }
        reverse(ans.begin(),ans.end());
        cout<<"Case "<<++cs<<":"<<"\n"<<s1<<" + "<<s2<<" = ";
        for(auto it=ans.begin();it!=ans.end();it++)
            cout<<*it;
        cout<<"\n";
    }
}

