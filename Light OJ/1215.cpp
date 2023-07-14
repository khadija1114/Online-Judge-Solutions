#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,gcd,lcm;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m>>lcm;
        gcd=__gcd(n,m);
        cout<<"Case "<<i<<": ";
        gcd*=(n/gcd)*(m/gcd);
        if(lcm%gcd==0) cout<<lcm/gcd;
        else cout<<"impossible";

        cout<<endl;

    }
}
