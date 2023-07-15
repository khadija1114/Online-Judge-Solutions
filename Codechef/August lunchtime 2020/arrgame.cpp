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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    w(t){
        cin>>n;
        int ar[n],freq[n]={};
        rep(i,n-1) cin>>ar[i];
        vi v;

        for(i=1;i<n;i++){
            if(ar[i]==0) freq[i]=freq[i-1]+1;
            if(ar[i]==1 && freq[i-1]) v.pb(freq[i-1]);
        }
    int s=v.size();
      if(v.size()==0){
            cout<<"No";
      }
        else if(v.size()==1){
            if(v[0]&1) cout<<"Yes";
            else cout<<"No";
        }
        else{
             sort(v.begin(),v.end());
            a=1;
            while(v[s-1]%2==0){
                s--;
                if(s==0)
                {
                    a=0;
                    break;
                }
            }
            if(a!=0)
            a=v[s-1];
            s=v.size();
            if(v[s-1]%2==0)
            b=v[s-1];
            else b=v[s-2];
           // cout<<a<<" "<<b<<endl;
            if(a/2 +1 >b) cout<<"Yes";
            else cout<<"No";
        }
        cout<<endl;
    }
}

