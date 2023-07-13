#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,j,m,ar[100005];
    long long sop=1;
    cin>>n>>m;

     if(n>m){
         cout<<0<<"\n";
         return 0;
    }


    for(i=0;i<n;i++) cin>>ar[i];
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                sop=(sop*abs(ar[i]-ar[j]))%m;

            cout<<sop<<"\n";
}
