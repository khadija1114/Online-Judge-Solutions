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
int t,j,cs=0,n,a,b,i,x;
string s;

int main()
{
    ws(t){
        cin>>n>>s;
        int cnt1=0,cnt2=0,ans=0,app1=0,app2=0;
        x=__builtin_popcount(n-1);
        x++;
        if(n==1){
            if(s[0]=='a') cout<<0<<endl;
            else cout<<1<<endl;
            continue;
         }
        j=n/2;
        i=0;
        a=0;
        b=j;
       // cout<<1<<" "<<x<<endl;
        while(s.size()>2 ){
                n=s.size();
            j=b; i=0; app1=0,app2=0;
            while(j>0){
                if(s[i]-'a'==a) cnt1++;
                else if(s[i]-'a'==a+1) app1++;
                if(s[n-i-1]-'a'==a) cnt2++;

                else if(s[n-i-1]-'a'==a+1) app2++;
                i++;j--;
            }
           // cout<<cnt1<<" "<<cnt2<<endl;

        cnt1=b-cnt1;
        cnt2=b-cnt2;
        ans+=min(cnt1,cnt2);;



        if(cnt1==cnt2){
            if(app2>app1){
                s=s.substr(b,b);
            }
            else s=s.substr(0,b);
         //   cout<<app1<<" "<<app2<<endl;
           //   cout<<s<<endl;

        }
        else if(cnt1<cnt2) s=s.substr(b,b);
        else s=s.substr(0,b);
        b/=2;
      //  cout<<cnt1<<" "<<cnt2<<" "<<s<<endl;
        a++; cnt1=0;cnt2=0;
        if(b==1) break;

        }

       sort(s.begin(),s.end());
        if(s[0]-'a'!=a ){
            ans++;
        }
        if(s[1]-'a'!=a+1)
            ans++;
        cout<<ans<<endl;
    }
}

