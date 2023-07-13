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
int t,i,j,cs=0,n,a,b,ans;
string s;

int main()
{

    w(t){
        cin>>a;
        if(a==1){
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        int v[N]={};
        for(i=1; ;i++){
                    v[i]=v[i-1]+3*i-1;
                    if(v[i]>a)
                    break;
            }
        a-=v[i-1];
        if(a>=0) ans++;
       // cout<<a<<endl;
        while(a>1){
            for( ; ;i--){
                if(v[i]<=a)
                {
                  //  cout<<v[i]<<" ";
                     break;
                }

            }
            a-=v[i];
          //  cout<<a<<endl;
            if(a>=0)
            ans++;
        }
        cout<<ans<<endl;

    }

}


