#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],n=0,t,i,count,x,dif,last,lies;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        count=0;
        last=2;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<n;j++)
        {

            if(a[j]-last)
            {
                lies=ceil((float)(a[j]-last)/5.0);
                    count=count+lies;
                    last=a[j];
            }

        }
        cout<<"Case "<<i<<": "<<count<<endl;

    }
}
