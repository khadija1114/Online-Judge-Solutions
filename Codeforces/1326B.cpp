#include<bits/stdc++.h>
using namespace std;
int ar[200005],br[200005],maxx=0;
int main()
{
    int n,i,t;

    cin>>n;
    for(i=0;i<n;i++) cin>>ar[i];
    for(i=0;i<n;i++)
    {
        br[i]=ar[i]+maxx;
        maxx=max(maxx,br[i]);
    }
    for(i=0;i<n;i++)
        cout<<br[i]<<" ";
}
