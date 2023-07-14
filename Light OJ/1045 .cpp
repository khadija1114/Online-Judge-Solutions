#include <bits/stdc++.h>
using namespace std;
double num[1000005];
int main()
{
    int i,j,t,n,m;
    long long ans;


    for(i=1;i<=1000000;i++)
    {
        num[i]=num[i-1]+log(i);
    }
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m;
        ans=(num[n]/log(m))+1;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}
