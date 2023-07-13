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
int t,i,j,cs=0,n,a,b,x;
string s;

int main()
{
    w(t){
        cin>>n>>x;
        int ar[n],cnt0=0,cnt1=0;
        for(i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]&1) cnt1++;
            else cnt0++;
        }
        if(cnt1==0 ||(cnt0==0 && x%2==0)){
            cout<<"No"<<endl;
            continue;
        }
        if(cnt1&1){
            cout<<"Yes"<<endl;
            continue;
        }
        else{
            cnt1--;
            x-=cnt1;
            if(x<=cnt0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}


