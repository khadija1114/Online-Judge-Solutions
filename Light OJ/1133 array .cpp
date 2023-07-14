#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,m,a[105],b,j,x,temp,y;
    char ch;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        cin>>n>>m;
        for(b=0;b<n;b++){
             cin>>a[b];
        }

        for(b=0;b<m;b++)
        {
            cin>>ch;
            if(ch=='S')
            {
                cin>>x;
                for(j=0;j<n;j++)
                {
                    a[j]=a[j]+x;

                }
            }
           else if(ch=='R')
            {
                y=n;
                for(j=0;j<n/2;j++)
                {
                    y--;
                    temp=a[j];
                    a[j]=a[y];
                    a[y]=temp;
                }
            }
            else if(ch=='M')
            {
                cin>>x;
                for(j=0;j<n;j++)
                {
                    a[j]*=x;
                }
            }
             else if(ch=='D')
            {
                cin>>x;
                for(j=0;j<n;j++)
                {
                    a[j]/=x;
                }
            }
             else if(ch=='P')
            {
                cin>>x;
                cin>>y;
                temp=a[y];
                a[y]=a[x];
                a[x]=temp;

            }

    }
      for(j=0;j<n;j++)
        {
            cout<<a[j];
            if(j!=n-1)
            {
                cout<<" ";
            }
            else{
                cout<<endl;
            }
        }
    }
    return 0;

}
