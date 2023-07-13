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
        ll ans=s.size();
        map <int,int> map_;
        bool first=false;
       ll  j=0,track=0,val=0,f,pos=0,cnt=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='-'){
                track--;
                if(track< 0 && map_[abs(track)]==0){
                   map_[abs(track)]=i+1;
                }
                if(track<=val){
                    val=track;
                    j=i;
                }
            }
            else{
                track++;
            }

        }
        val=abs(val);
        for(auto it: map_){
            ans+=it.ss;
         //   cout<<it.ff<<" "<<it.ss<<endl;
        }
       // ans+=(n-j-1);
       cout<<ans<<endl;
    }
}

