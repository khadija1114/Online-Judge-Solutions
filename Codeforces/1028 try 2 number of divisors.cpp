#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
#define m 1000007
int prime[m+2];
int  v[m+2];
int x=0;

void seive( )
{
    v[x++]=2;
    int i,j,n;
    n=sqrt(m);
    for(i=3;i<=n;i+=2)
    {
        if(prime[i]==0)
        {
            v[x++]=i;
            prime[i]=1;
            for(j=i*i;j<=m;j=j+(2*i)) prime[j]=1;
        }
    }
    for( ;i<=m;i+=2)
    {
        if(prime[i]==0)
        {
            v[x++]=i;
        }
    }
    sort(v,v+x);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    seive();
    int  b,i,t,j;
    long long n,a,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ans=1;
        cin>>n;
        a=sqrt(n);
        for(j=0;j<x&&v[j]<=a;j++){

                int k=0;
                if(n<v[j]) break;
                if(n%v[j]==0){


            while(n%v[j]==0)
            {
                n=n/v[j];
                k++;
            }
            ans*=(k+1);
            }
        }
        if(n>1) ans*=2;
        cout<<"Case "<<i<<": "<<ans-1<<endl;

    }
}
