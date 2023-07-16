#include<bits/stdc++.h>
using namespace std;
long long md=1000000007;
long long mod(long long n)
{
    long long res=1;
    long long a=3;
    while(n>0){
        if(n&1) res=(res*a)%md;
        a=(a*a)%md;
        n>>=1;
    }
    return res;
}
int main()
{
    long long div,n,m,t;
    cin>>t;
    while(t--)
    {
            cin>>n;
            div=1;
            m=n/3;
            if(n==1) div =1;
           else if(n%3==0) div=mod(m);
           else if(n%3==1) div=(mod(m-1)*4)%md;
           else div=(mod(m)*2)%md;
            cout<<div<<endl;

    }
}
