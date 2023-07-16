#include<bits/stdc++.h>
using namespace std;

int prime[1000005],mark[1000005];
int maxx=1000002;
int ans[11][1000005];
void sieve()
{
    int i,j,n;
    mark[2]=1;
    for(i=4;i<=maxx;i+=2) mark[i]=1;
    for(i=3;i<=maxx;i+=2)
    {
        if(mark[i]==0)
        {
            for(j=i;j<=maxx;j+=i)
            {
                mark[j]++;
            }
        }
    }
    for(i=0;i<=10;i++)
    {
        for(j=1;j<=maxx;j++)
            ans[i][j]=ans[i][j-1]+bool(mark[j]==i);
    }
}




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();

    int i,j,a,b,n,t,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
//       for(i=a;i<=b;i++)
//        {
//            cout<<mark[i]<<" ";
//        }
        cout<<ans[n][b]-ans[n][a-1]<<"\n";

    }

}
