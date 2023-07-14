#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
     unsigned long long int dp[300][300],ar[300][300],i,j,t,a,b,n,jmax;
    cin>>t;
    for(a=1;a<=t;a++){
        cin>>n;
        memset(dp,0,sizeof(dp));
        memset(ar,0,sizeof(ar));
        for(i=1;i<=2*n-1;i++)
        {
            if(i<=n) jmax=i;
            else jmax=2*n-i;

            for(j=1;j<=jmax;j++)
                cin>>ar[i][j];
        }
        for(i=2*n-1;i>0;i--)
        {
             if(i<=n) jmax=i;
            else jmax=2*n-i;

            if(i==2*n-1)
            {
                dp[i][jmax]=ar[i][jmax];
                continue;
            }
            if(i>=n){
            for(j=1;j<=jmax;j++)
            {
                if(j==1) dp[i][j]=dp[i+1][j]+ar[i][j];
                else
                {
                    dp[i][j]=max(dp[i+1][j]+ar[i][j],dp[i+1][j-1]+ar[i][j]);
                }
            }
            }
            else{
                for(j=1;j<=jmax;j++)
            {
//                if(j==1) dp[i][j]=dp[i+1][j]+ar[i][j];
//                else
//                {
                    dp[i][j]=max(dp[i+1][j]+ar[i][j],dp[i+1][j+1]+ar[i][j]);
////                }
            }
            }



        }
//         for(i=1;i<=2*n-1;i++)
//        {
//            if(i<=n) jmax=i;
//            else jmax=2*n-i;
//
//            for(j=1;j<=jmax;j++)
//                cout<<dp[i][j]<<" ";
//
//                cout<<endl;
//        }
        cout<<"Case "<<a<<": "<<dp[1][1]<<'\n';

    }



}
