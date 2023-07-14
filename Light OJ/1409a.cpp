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
ll j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},c,d,dyy[]={0,-1,1,0},k,m,x,y;
string s;

int main()
{
    int t;
    w(t){
        ll cnt=0;
       string s="00",ss;
       cin>>ss>>n;
       s+=ss;
       for(i=0;i<s.size();i++)
        cnt+=s[i]-'0';
       ll ans=0;
       ll i=s.size()-1,j=10;
       //cout<<cnt<<endl;
       while(cnt>n){
        if(s[i]=='0') {
            j*=10;
            i--;
            continue;
        }
        cnt-=(s[i]-'0');
        cnt+=1;
        k=i;
        while(s[k-1]=='9'){
            s[k-1]='0';
                k--;
            cnt-=9;
        }
        s[k-1]+=1;
        ans+=(j-((s[i]-'0')*j/10));
        s[i]='0';
        j*=10;
        i--;
      //  cout<<cnt<<" "<<ans<<" "<<j<<" "<<s<<endl;
       }
        cout<<ans<<endl;
    }
}

