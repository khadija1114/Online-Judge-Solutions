#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    long long ans=0;
    cin>>n;
    for( i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            for(k=1;k<=n;k++)
            ans+=__gcd(i,__gcd(j,k));
    cout<<ans<<endl;
}


