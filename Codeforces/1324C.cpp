#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,ans,ar[200005],k;
    string s;
    cin>>t;
    while(t--){
        ans=0;
        k=1;
        cin>>s;
        for(i=0;i<=s.size();i++) ar[i]=0;
        for(i=0;i<s.size();i++) {
            if(s[i]=='R'){
                ar[k++]=i+1;
            }
        }
        ar[k++]=s.size()+1;
        for(i=0;i<k-1;i++)
            ans=max(ans,ar[i+1]-ar[i]);
        cout<<ans<<endl;
    }
}
