#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,ans;
    cin>>n;

     ans=2*4*3*pow(4,n-3);

    if(n-4>=0) ans=ans+4*9*pow(4,n-4)*(n-3);

    cout<<ans<<endl;
}
