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
int t,j,cs=0,n,a,b,i,ans,pre,k,cnt,p,sum;
string s;

int main()
{
    w(t){
        cin>>n>>p>>k;
        pre=0,sum=0,ans=0;
        int ar[n];
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar, ar+n);

        for(i=0;i<=k;i++){
            sum=pre;
            if(sum>p) break;
            cnt=i;
            for(j=i+k-1;j<n;j+=k){
                if(sum+ar[j]<=p){
                    cnt+=k;
                    sum+=ar[j];
                  //  cout<<cnt<<" "<<sum<<" "<<j<<endl;
                }
                 else{
                    break;
                }
            }
            pre+=ar[i];
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }
}

