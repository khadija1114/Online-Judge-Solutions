#include<bits/stdc++.h>
using namespace std;
#define si 10005
bool vis[si];
vector<int> v[si];
void dfsvis(int x)
{
    vis[x]=true;
    int i;
    for(i=0;i<v[x].size();i++)
    {
        int n=v[x][i];
        if(vis[n]==false) dfsvis(n);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,l,x,y,a,cnt=0,i;
        cin>>n>>k>>l;
        for(i=0;i<=n;i++)
        {
            vis[i]=false;
            v[i].clear();
        }
        for(i=0;i<k;i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
        }
        for(i=0;i<l;i++)
        {
            cin>>a;
            dfsvis(a);
        }
        for(i=1;i<=n;i++)
        {
            if(vis[i])
            {
                cnt++;
//                cout<<i<<" ";
            }
        }
        cout<<cnt<<"\n";
    }
}
