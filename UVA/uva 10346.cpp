#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans,k;
    cout<<char(66);
    while(scanf("%d%d",&n,&k)!=EOF){
        ans=n;
        m=n;
        while(n>=k){
                ans+=n/k;
            n=n/k+n%k;
        }
        cout<<ans<<endl;
    }
}
