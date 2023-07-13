#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5005],n,t,i,m,ans[5005];
    cin>>t;
    while(t--){
            bool flag=false;
        cin>>n;
        for(i=1;i<=n;i++) cin>>ar[i];
        for(i=1;i<=n;i++) ans[i]=0;
        for(i=n;i>0;i--) ans[ar[i]]=i;
        for(i=3;i<=n;i++){
            if(ans[ar[i]] && abs(ans[ar[i]]-i)>=2)
            {
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
        }
        if(flag==false) cout<<"NO"<<endl;

    }
}
