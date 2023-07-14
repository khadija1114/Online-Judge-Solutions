#include<bits/stdc++.h>
using namespace std;
long long zero(long long n)
{
    long long sum=0,mul=5;
    while(mul<=n)
    {
        sum+=(n/mul);
        mul*=5;
    }
    return sum;
}
long long bsearch(long long n)
{
    long long z, high=10000000000,low=1,mid,ans=-1;
    while(low<high)
    {
        mid=(low+high)/2;
        z=zero(mid);
        if(z==n)
        {
            ans=mid;
        }
        if(z<n) low=mid+1;
        else high=mid;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i;
    long long n;
    long long ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        ans=bsearch(n);
        if(ans<0) cout<<"Case "<<i<<": impossible"<<"\n";
        else cout<<"Case "<<i<<": "<<ans<<"\n";

    }
}
