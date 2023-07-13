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
int t,i,j,cs=0,n,a,k,b;
string s;

int main()
{
    w(t){
        cin>>n>>k;

        int ar[n];
        pair<int,int> dis=mp(1e9+1,-1);
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
        for(i=0;i+k<n;i++){
            dis=min(dis,mp(ar[i+k]-ar[i],ar[i]+(ar[i+k]-ar[i])/2));
        }
        cout<<dis.ss<<endl;
    }
}

