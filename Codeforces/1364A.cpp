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
        cin>>n>>k;
        int ar[n],mx,mn;
        ll sum=0;bool bl=false;
        rep(i,n-1){
            cin>>ar[i];
            if(ar[i]%k!=0){
                bl=true;

            }
            sum+=ar[i];
        }
        if(bl==false){
            cout<<-1<<endl;
            continue;
        }
        i=0;j=n-1;
        while(sum%k==0){
            if(ar[i]%k!=0){
                sum-=ar[i];
            }
            else if(ar[j]%k!=0){
                sum-=ar[j];
            }
            i++;j--;
        }
        cout<<n-i<<endl;
    }
}

