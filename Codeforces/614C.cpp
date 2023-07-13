#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,a[100000],b,x,y,i,t,j,count=0;
    char ch;
    cin>>n;
    double ans=0;
    for(i=1;i<=n;i++)
    {
        ans+=1.0/i;
    }
    cout<<fixed<<setprecision(10)<<ans<<"\n";
}

