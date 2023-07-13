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
string s;

int main()
{
    w(t){
        scanf("%d",&n);
        int ar[n],ans[n+2]={};
        for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
            ans[ar[i]]++;
        }
        int cnt=0;
        for(i=0;i<n;i++){
            b=ar[i];
            for(j=i+1;j<n;j++){
                b+=ar[j];
                if(b>n)
                    break;

                if(ans[b]){
                    cnt+=ans[b];
                    ans[b]=0;
                }
                  //  cout<<i<<" "<<j<<" "<<ans[b]<<endl;
            }
        }
        printf("%d\n",cnt);

    }
}


