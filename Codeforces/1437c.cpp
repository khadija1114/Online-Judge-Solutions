#include<bits/stdc++.h>
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

const int N=1e6+2;
int t,j,cs=0,n,a,b,i,k,m,inf=1e7;
string s;

int main()
{
    w(t){
        cin>>n;
        int ar[n],dp[n+1][2*n+1]={};
        rep(i,n-1)  cin>>ar[i];
        sort(ar,ar+n);
        for(i=1;i<=n;i++)
            for(j=0;j<=2*n;j++)
                dp[i][j]=inf;
        for(i=1;i<=n;i++){
            for(j=1;j<=2*n;j++){
                dp[i][j]=min({dp[i][j],dp[i][j-1],dp[i-1][j-1]+abs(ar[i-1]-j)});
            }
        }
//        for(i=0;i<=n;i++){
//            for(j=1;j<=2*n;j++)
//                cout<<dp[i][j]<<" ";
//            cout<<endl;
//        }
        cout<<dp[n][2*n]<<endl;
    }

}



