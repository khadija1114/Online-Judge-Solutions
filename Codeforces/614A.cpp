#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,b,x,y,i,s,k,t,j,count=0;
    //int v[100000];
    char ch;

    cin>>t;
    while(t--)
    {
        cin>>n>>k>>s;

       // memset(v,0,sizeof(v));
        for(i=1;i<=s;i++)
        {
            cin>>x;
            v[x]=1;
        }
       // for(int l=1;l<=s;l++) cout<<v[l]<<" ";
        if(v[k]==0) cout<<"0"<<"\n";
        else {
            for(i=1; ;i++)
        {
            if(i+k<=n&&v[i+k]==0) {
                cout<<i<<"\n";
                 // cout<<"3"<<endl;
                break;
            }
            else if(k-i>=1&&v[k-i]==0){

                cout<<i<<"\n";

                break;
            }
        }
        }
        v.clear();


    }
}
