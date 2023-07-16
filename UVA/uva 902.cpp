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
int t,i,j,cs=0,n,a,b;
string s,ch;

int main()
{
    while(cin>>n>>s){
        map<string,int> map_;
        a=s.size();
        for(i=0;i+n<=a;i++){
            ch=s.substr(i,n);
          // cout<<ch<<endl;
            map_[ch]++;
        }
        int max=0;
        for(auto it=map_.begin();it!=map_.end();it++){
             //   cout<<it->ff<<" "<<it->ss<<endl;
            if(max<it->ss){
                max=it->ss;
                ch=it->ff;
            }
        }
        cout<<ch<<"\n";

    }
}


