#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    long long b,res;
    cin>>t;
    while(t--)
    {
        res=1;
        cin>>a>>b;
        while(b>0)
        {
            if(b&1) res=(res*a)%10;
            a=(a*a)%10;
            b>>=1;
    }
    cout<<res<<endl;
    }
}
