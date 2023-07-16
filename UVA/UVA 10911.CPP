#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x[8],y[8];
    vector<string> vs;
    int i,j,k,minn=0;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        for(i=0;i<n;i++) cin>>vs>>x[i]>>y[i];
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                minn+=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            }
        }
    }
}
