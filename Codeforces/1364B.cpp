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
int t,j,cs=0,n,a,b,k,i;
string s;

int main()
{
    w(t){
        cin>>n;
        vi v;

        int ar[n];
        bool bl[n];
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
        for(i=0;i<n-1;i++){
            if(ar[i]<ar[i+1]){
                bl[i]=0;
                bl[i+1]=1;
            }
            else{
                bl[i]=1;
                bl[i+1]=0;
            }

        }
        for(i=0;i<n;i++ ){
                v.pb(ar[i]);
            while(bl[i]==bl[i+1]){
                i++;
            }
        }
       // v.pb(ar[n-1]);
        cout<<v.size()<<endl;
        for(auto it:v)
            cout<<it<<" ";
        cout<<endl;
    }
}


