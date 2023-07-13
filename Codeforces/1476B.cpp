#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans=0,k,t,i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        long long ar[n]={},cnt=0;
        ans=0;
        for(i = 0; i < n; i++){
            cin>>ar[i];
        }
        cnt = ar[0];
        for(i = 1; i < n; i++){
            if(cnt * k < ar[i] * 100){
                if((ar[i]*100 - cnt*k) % k){
                    ans += (ar[i]*100 - cnt*k + k) / k;
                    cnt += (ar[i]*100 - cnt*k + k) / k;
                }
                else{
                    ans += (ar[i]*100 - cnt*k) / k;
                    cnt += (ar[i]*100 - cnt*k) / k;
                }
                //cout<< i << " " << cnt << " " << ans <<endl;
            }
            cnt += ar[i];
        }
        cout<<ans<<endl;
    }
}
