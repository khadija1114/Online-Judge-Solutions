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
const int N=102;
int t,i,j,cs=0,n,a,b,s,f,d;

int main()
{
    w(t){
        cin>>n>>s;
        f=200,d=200;
        int ar[n+1];
        for(i=0;i<n;i++)
            cin>>ar[i];
        for(i=0;i<n;i++){
            cin>>b;
            if(b) f=min(f,ar[i]);
            else d=min(d,ar[i]);
        }
        if(f+d+s<=100) cout<<"yes";
        else cout<<"no";
        cout<<endl;
    }
}
