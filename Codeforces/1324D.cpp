#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,pos,i,x;
    long long ans=0;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    for(auto &it : a) cin>>it;
    for(auto &it : b) cin>>it;
    for(j=0;j<n;j++) c[j]=a[j]-b[j];
    sort(c.begin(),c.begin()+n);
    for(int j=0;j<n;j++){
        if(c[j]<=0) continue;
        pos=lower_bound(c.begin(),c.end(),-c[j]+1)-c.begin();
        ans+=j-pos;
    }
    cout<<ans<<"\n";

}
