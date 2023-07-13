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
    w(t){
        cin>>n;
        int ar[n];
        int  br[n+1]={};

        for(i=0;i<n;i++){
            cin>>ar[i];
            br[ar[i]]++;
        }

        vi v;
        for(i=0;i<n;i++){
            for(j=0;j<=n;j++){
                if(br[j]==0)
                    break;
            }
            cout<<j<<endl;
            br[j]++;
             br[ar[j]]--;
           //  ar[j-1]=j;
            //if(j==0) j++;

            v.pb(j);



        }

        cout<<v.size()<<endl;

        for(auto it:v)
            cout<<it<<" ";

        cout<<endl;
    }
}

