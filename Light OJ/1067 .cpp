#include<bits/stdc++.h>
using namespace std;
long long int  m=1e6+3;
long long int mx=1e6;
//#define ll long long
long long int power(long long int n)
{
    long long int  result=1,ans,p=m-2;

    while (p>0)
    {
        if(p&1) result =((result%m)*n%m)%m;
        n=(n*n)%m;
        p>>=1;
    }
    return result;

}

int main()
{
    long long int  n,t,i,fact[1000005],r,devide,ans;
    fact[1]=1;
    fact[0]=1;
    for(i=2;i<=mx;i++)
        fact[i]=((fact[i-1]%m)*(i%m))%m;
    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>n>>r;
        //if(n==r||r==0)




        devide=(fact[r]*fact[n-r])%m;

        n=fact[n];
        devide=power(devide);

        ans=(n*devide)%m;

        cout<<"Case "<<i<<": "<<ans<<endl;

    }
}
