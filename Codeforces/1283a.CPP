#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,h,r,k,m,ans;
    k=24*60;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        ans=k-(h*60+m);
        cout<<ans<<"\n";
    }
}
