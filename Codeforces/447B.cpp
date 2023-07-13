#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arra[100],i,j,t=0,maxx=0,sum=0,n,k,sum1=0;
    char ch[10000];
    cin>>ch>>k;
    for(i=0;i<26;i++)
    {
        cin>>arra[i];
        if(arra[i]>maxx) maxx=arra[i];
    }

    for(i=0;ch[i]!='\0';i++)
    {
        sum+=(i+1)*arra[ch[i]-'a'];
        t++;
    }
    t+=k;
    sum1=(t*(t+1))/2;
    sum1-=((t-k)*(t-k+1))/2;

    sum+=sum1*maxx;
    cout<<sum<<"\n";
}
