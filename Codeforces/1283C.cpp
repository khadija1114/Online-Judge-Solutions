#include<bits/stdc++.h>
using namespace std;
int n,m=0,k=0,i,ar[200005],br[200005],v[200005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
   // memset(br,0,sizeof(br));
    for(i=1;i<=n;i++)
    {
        cin>>ar[i];
        if(ar[i]!=0)// cout<<ar[i];
        {
            br[ar[i]]=1;
            //v.push_back(i);


        }
    }
    for(i=1;i<=n;i++)
    {
       if(br[i]==0){
            v[m++]=i;
             //cout<<v[m-1]<<endl;
       }
        //cout<<" ";
    }
    for(i=1;i<=n;i++)
    {
        if(ar[i]!=0) cout<<ar[i];
        else
        {
            if(v[m-1]!=i)
            {
                cout<<v[m-1];
                m--;
            }
            else
            {
                cout<<v[k];
                k++;
            }
        }
        cout<<" ";
    }

}
