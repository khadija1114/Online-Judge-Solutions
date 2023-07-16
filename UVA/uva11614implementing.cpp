#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long ans,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        ans=floor((1+sqrt(8*m+1))/2)-1;
        cout<<ans<<endl;
    }
}
