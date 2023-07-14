#include<bits/stdc++.h>
using namespace std;
#define gamma 0.5772156645
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    double ans,ar[100005];
    ar[0]=0;
    int t,i,n,m=100000;
    for(i=1;i<=m;i++){
        ar[i]=ar[i-1]+1.0/i;
    }
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        if(n<=m) cout<<fixed<<setprecision(10)<<"Case "<<i<<": "<<ar[n]<<endl;
        else{
             ans=gamma+log(n*1.0+.5);
             cout<<fixed<<setprecision(10)<<"Case "<<i<<": "<<ans<<endl;
        }

    }
}
