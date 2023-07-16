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
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,k,l;
string s;

int main()
{
    cin>>n;
    int ar[n+1][n+1]={};
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>ar[i][j];
    int sum=-mod;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            ar[i][j]+=ar[i-1][j]+ar[i][j-1]-ar[i-1][j-1];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            for(k=i;k<=n;k++)
                for(l=j;l<=n;l++)
                    sum=max(sum,ar[k][l]-ar[i-1][l]-ar[k][j-1]+ar[i-1][j-1]);
    cout<<sum<<endl;
}


