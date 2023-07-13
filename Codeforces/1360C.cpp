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
        cin>>n;
        int ar[n+1],cnt1=0,cnt0=0;
        bool bl = false;
        rep(i,0,n-1){
            cin>>ar[i];
            if(ar[i]&1) cnt1++;
            else cnt0++;
        }

        if(cnt0%2==1){
            sort(ar,ar+n);
            rep(j,1,n-1){
                if(ar[j]-ar[j-1]==1)
                {
                    bl=true;
                    break;

                }
            }
        }
        else {
             bl=true;
        }
        if(bl){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}


