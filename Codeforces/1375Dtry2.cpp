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
        int ar[n],br[1005]={};
        bool flag=true;
        for(i=0;i<n;i++){
            cin>>ar[i];
            br[ar[i]]++;
        }
        vi v;
        while(flag){
            for(i=0;i<=n;i++){
                if(br[i]==0) break;
            }

            if(i==n){
                for(j=0;j<n;j++){
                    if(ar[j]!=j){
                        break;
                    }
                }
                if(j==n) break;
                a=ar[j];
                ar[j]=n;
                br[n]++;
                br[a]--;
                v.pb(j);
            }
            else{
                 a=ar[i];
                ar[i]=i;
                br[i]++;
                br[a]--;
                v.pb(i);
            }


        }

        cout<<v.size()<<endl;
        for(auto it:v)
            cout<<it+1<<" ";
        cout<<endl;

    }
}

