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

const int N=1e9+2;
long long  mod=1e9+9,a,b;
int t,j,cs=0,n,x,i;
string s;

int main()
{
    w(t){
        cin>>n;
        map<int,int> map_,map__,ans;
        long long cnt=0,out=0,out2=0;
        int mn=N;
        bool flag=true;
        for(i=0;i<n;i++){
            cin>>x;
            map_[x]++;
            ans[x]++;
            mn=min(mn,x);
        }
        for(i=0;i<n;i++){
            cin>>x;
            map__[x]++;
            ans[x]++;
            mn=min(mn,x);

        }

       for(auto it:ans){
        a=it.ff;
        b=it.ss;
        if(b&1){
            flag=false;
            break;
        }
        b/=2;
        b=abs(b-map_[a]);
        ans[a]=b;
        cnt+=b;
       }

      //  for(auto it:ans) cout<<it.ff<<" "<<it.ss<<endl;
   //   cout<<cnt<<endl;
        cnt/=2;
        if(flag==false){
            cout<<-1<<endl;
            continue;
        }

        for(auto it:ans){
        if(cnt==0) break;
        a=it.ff;
        b=it.ss;
        if(b==0) continue;
        if(a>2*mn){
            a=2*mn;
        }
        if(b<=cnt){
            cnt-=b;
            out+=a*b;
        }
        else{
            b=cnt;
            cnt=0;
            out+=a*b;
        }
       }
       cout<<out<<endl;
    }
}

