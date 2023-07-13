#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,a[1000];
    long long sum1=0,sum2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0) sum2++;
        else sum1++;
    }
    k=min(sum1,sum2);
    cout<<k<<endl;

}
