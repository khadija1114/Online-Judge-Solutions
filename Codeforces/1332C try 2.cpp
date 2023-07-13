#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,k,n;
    string s;
    cin>>t;
    while(t--){
        int ans=0,req;
        cin>>n>>k>>s;
        for(i=0;i<k/2;i++){
            int cnt[26]={};
            for(int j=0;j+k-1<n;j+=k){
                int i1=j+i;
                int i2=j+(k-1-i);
                cnt[s[i1]-'a']++;
                cnt[s[i2]-'a']++;
            }
            req=2*n/k;
            ans+=req-*max_element(cnt,cnt+26);
        }
        if(k&1){
            int cnt[26]={};
            for(i=k/2;i<n;i+=k){
                cnt[s[i]-'a']++;
            }
            req=n/k;
            ans+=req-*max_element(cnt,cnt+26);
        }
        cout<<ans<<"\n";
    }
}
