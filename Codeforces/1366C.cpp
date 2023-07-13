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

long long  mod=1e9+9;
const int N=1e6+2;
int t,i,j,cs=0,n,a,m,b;
string s;

int main()
{
    w(t){
        cin>>n>>m;
        if(n<3 && m<3)
        {
            cout<<0<<endl;
            continue;
        }
        bool ar[n][m];
        int cnt1=0,cnt0=0,ans;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>ar[i][j];
                if(ar[i][j])
                    cnt1++;
                else
                    cnt0++;
            }
        }
        ans=min(cnt0,cnt1);
        int dis[55]={},dis0[55]={};
        if(n&1) a=m/2+n/2;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(ar[i][j]){
                    b=i+j;
                    if(i+j>a)
                        b=n+m-b-2;
                    dis[b]++;
                }

                else{
                    b=i+j;
                    if(i+j>a)
                        b=n+m-b-2;
                        dis0[b]++;
                }

            }
        }
        int cnt=0;
        for(i=0;i<52;i++){
            cnt+=min(dis[i],dis0[i]);
            cout<<dis[i]<<" "<<dis0[i]<<endl;
        }
        if(n&1 && m&1)
            cnt--;
        ans=min(ans,cnt);
        cout<<ans<<endl;
    }
}


