#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,k,a;
    long long ans,way;
    int mod=998244353;
        cin>>n>>k;
        vector<int> div;
        ans=0,way=1;
        for(i=0;i<n;i++){
            cin>>a;
            if(a>n-k)
                ans+=a,div.push_back(i);
        }
        for(i=1;i<div.size();i++)
        {
            way = (way*(div[i]-div[i-1])) % mod;
        }
        cout<<ans<<" "<<way<<endl;

}
