#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,a,b,x1,x2,y1,y2,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        cin>>x1>>y1>>x2>>y2>>n;
        for(j=0;j<n;j++)
        {
            cin>>a>>b;
            if(x1<a&&a<x2&&y1<b&&b<y2)
            {
                 cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }


        }
    }
    return 0;
}
