#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int ar[100005]={},br[100005]={},i;
        long long  ans=0,cnt=0,k=0;
        int n,x;
        cin>>n>>x;
        for(i=1;i<=n;i++){
            cin>>ar[i];
            if(ar[i]>=x){
                ans+=ar[i]-x;
                cnt++;
            }
            else br[k++] = ar[i];
        }
        //for(i=0;i<n;i++) cout<<ar[i]<<" ";
        sort(br,br+k);

       // cout<<n<<endl;
        for(i=k-1;i>=0 && ans;i--){
            if(ans-x+br[i]>=0){
                ans-=(x-br[i]);
                cnt++;
              //  cout<<ans<<endl;
            }
            else break;
        }
        cout<<cnt<<endl;

    }
}

