#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int ar[105]={},br[105]={},i;
        bool ans=true;
        int n;
        cin>>n;
        for(i=1;i<=n;i++){
            cin>>ar[i]>>br[i];
            if(ar[i]<ar[i-1] || br[i]>ar[i] || br[i]<br[i-1] || ar[i]-ar[i-1] < br[i]-br[i-1])
                ans=false;
        }
        if(ans) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
