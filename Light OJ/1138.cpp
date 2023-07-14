#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    double x,y,a;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        x=ceil((n+1)/6.0);
        y=floor((n+1)/6.0);
        if(x==y) cout<<"Case "<<i<<": impossible"<<endl;
        else {
            n-=n/6;
            cout<<"Case "<<i<<": "<<n*5<<endl;
        }
        }
}
