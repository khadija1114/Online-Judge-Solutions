#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,t;
    long long ans=0;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n+1],br[n+1]={};
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
        int k=n-1;
        sort(ar,ar+n);
        for(i=n-1;i>=0;i-=2){
           br[i]=ar[k];
       //    cout<<br[i]<<" ";
            k--;
        }
        if(n&1) i=1;
        else i=0;

        for( ;i<n;i +=2){
            br[i]=ar[k];
            k--;
        }
        for(i=0;i<n;i++) cout<<br[i]<<" ";
        cout<<endl;
    }
}



