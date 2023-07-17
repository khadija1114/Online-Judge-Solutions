#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        if( i%15!=0 && i%5!=0 && i%3!=0)
        ans+=i;
    cout<<ans<<endl;
}

