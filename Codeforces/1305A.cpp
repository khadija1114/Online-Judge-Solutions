#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,t,k=0,n,ar[1000],br[1000];
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++) cin>>ar[i];
        for(i=0;i<n;i++) cin>>br[i];
        sort(ar,ar+n);
        sort(br,br+n);
        for(i=0;i<n;i++) cout<<ar[i]<<" ";
        cout<<"\n";
        for(i=0;i<n;i++) cout<<br[i]<<" ";
        cout<<endl;
    }
}
