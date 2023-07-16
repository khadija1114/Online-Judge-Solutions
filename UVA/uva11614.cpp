#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    return (n*(n+1))/2;
}
int main()
{
    int n,m,a,b,t,s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=1;
        m=s;
        while(abs(n-m)!=1)
        {
            a=(n+m)/2;
            if(sum(a)>s) m=a;
            else n=a;
        }
        cout<<min(n,m)<<endl;
    }
}
