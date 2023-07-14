#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,i,p,q,j,count,egg,a[50];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        egg=0;
        count =0;
        cin>>n>>p>>q;
        for(j=0;j<n;j++)
        {
             cin>>a[j];
        }
        for(j=0;j<n;j++)
        {

            egg=egg+a[j];
            count++;
            if(count>p||egg>q)
            {
                count=count-1;
                break;
            }

        }
        cout<<"Case "<<i<<": "<<count<<endl;

    }
}
