#include<bits/stdc++.h>
using namespace std;
#define m 5000002
unsigned long long int sum[5000005];
long long int i,j;
int phi[5000005];
void calculatephi()
{

    for(i=2;i<=m;i++) phi[i]=i;
    for(i=2;i<=m;i++)
    {
        if(phi[i]==i)
        {
            for(j=i;j<=m;j+=i)
            {
                phi[j]-=phi[j]/i;
            }
        }
    }
}
void calsulatesum()
{

    sum[1]=0;
    for(i=2;i<=m;i++)
    {
       sum[i] = phi[i];
        sum[i]*=phi[i];
        sum[i]+=sum[i-1];
    }
}
int main()
{
    calculatephi();
    calsulatesum();
    int t,a,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        printf("Case %d: %llu\n",i,sum[b]-sum[a-1]);
    }
}
