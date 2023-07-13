#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e9+10;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    w(t){
        cin>>n>>k;
        ll ar[n],mx=-1,mn=N;
        rep(i,n-1){
            cin>>ar[i];
          //  mx=max(mx,ar[i]);
           // mn=min(mn,ar[i]);
        }
        sort(ar,ar+n);
        for(i=n-2,j=0; j<k && i>=0;i--,j++){
            ar[n-1]+=ar[i];
            ar[i]=0;
        }
        sort(ar,ar+n);
        cout<<ar[n-1]-ar[0]<<endl;
    }
}



