#include<bits/stdc++.h>
using namespace std;
int prime[]={2,3,5,7,11,13,17,19,23,29,31};
int main()
{
    int n,i,ar[1005],t,ans[1005],cnt=0;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++)
            ans[i]=-1;
        for(i=0;i<n;i++)
            cin>>ar[i];
        cnt=1;
        for(auto p: prime){
                bool bl=false;
            for(i=0;i<n;i++){
                if(ans[i]!=-1) continue;
                if(ar[i]%p) continue;

                bl=true;
                ans[i]=cnt;
            }
            if(bl) cnt++;
        }
        cout<<cnt-1<<"\n";
        for(i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";

    }
}
