#include<bits/stdc++.h>
#define mod 1e9+9
#define make_pair mp
#define ff first
#define ss second
#define pb push_back
#define w(x) cin>>x;while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;


int main()
{
   // ios
    int t,i,j,cs=0,n,x;
    string s;
    cin>>t;
    while(t--)
    {
        unsigned long long int a[300][300];
        memset(a,0,sizeof(a));
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            for(j=1;j<=i;j++)
                cin>>a[i][j];


        for(i=n+1;i<2*n;i++)
            for(j=1;j<=2*n-i;j++){
                cin>>a[i][j];
            }

        for(i=2;i<=n;i++)
            for(j=1;j<=i;j++){
                if(j==1) a[i][j]+=a[i-1][j];
                else if(j==i) a[i][j]+=a[i-1][j-1];
                else a[i][j]+=max(a[i-1][j-1],a[i-1][j]);
            }
         for(i=n+1;i<2*n;i++)
            for(j=1;j<=2*n-i;j++){
                a[i][j]+=max(a[i-1][j],a[i-1][j+1]);
            }

        cout<<"Case "<<++cs<<": "<<a[2*n-1][1]<<'\n';


    }
}


