#include<bits/stdc++.h>
using namespace std;
int mod(int x,int b,int m)
{
    if(b==1) return x;
    int y;
    y=mod(x,b/2,m);
    if(b&1)
        return ((y*y)%m*x)%m ;
    else
        return  (y*y)%m ;
}
int main()
{
    int t,a,b,m,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>m;
        cout<<mod(a,b,m)<<endl;

    }
    cin>>n;
}
