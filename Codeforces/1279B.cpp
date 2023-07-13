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
int t,i,j,cs=0,n,a,b,k;
string s;

int main()
{
    w(t){
        cin>>n>>k;
        int ar[n],mx=-1,pos;
        ll cnt=0;
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
        for(i=0;i<n;i++){
            cnt+=ar[i];
            if(mx<ar[i]){
                mx=ar[i];
                pos=i+1;
            }
            if(cnt>k){
                cnt-=ar[i];
                break;
            }
         //   cout<<1<<" "<<cnt<<" "<<mx<<endl;
        }
        if(i==n || (pos==i+1 && ar[i+1]>=mx)){
            cout<<0<<endl;
       //     cout<<ar[i]<<" "<<mx<<endl;
        }
        else{
            cout<<pos<<endl;
        }
    }
}
/*
1
10 9
1 1 1 1 1 1 1 1 2 1
*/
