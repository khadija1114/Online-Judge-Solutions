#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,t,i,j,ar[200005];
    pair<int,int> ans;
    cin>>t;
    while(t--)
    {
         bool flag=false;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];

            if(i>0&&!flag)
            {
                if(ar[i-1]-ar[i]>=2||ar[i]-ar[i-1]>=2)
                {
                    flag= true;
                    ans.first=i;
                    ans.second=i+1;
                  // cout<<"enter";
                }
            }

        }
        if(flag) cout<<"YES"<<'\n'<<ans.first<<" "<<ans.second<<'\n';
        else cout<<"NO"<<'\n';

    }
}
