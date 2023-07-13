#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[100005],br[100005],i,t;
    cin>>t;
    while(t--){
    int pos[100005]={},neg[100005]={};
    bool flag=false;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>ar[i];
        if(ar[i]<0){
            neg[i]=neg[i-1]-1;
            pos[i]=pos[i-1];
        }
        else{
            pos[i]=pos[i-1]+ar[i];
            neg[i]=neg[i-1];
        }
    }
    for(i=1;i<=n;i++)
    cin>>br[i];


    if(ar[1]!=br[1]){
        cout<<"NO"<<"\n";
        flag=true;
    }
    for(i=2;i<=n && flag==false;i++){
           // cout<<br[i]<<" "<<endl;
            if(ar[i]!=br[i]){
              if(br[i]<0 && neg[i-1]==0)
                {
                   // cout<<1<<i<<endl;
                    cout<<"NO"<<"\n";
                    flag=true;
                    break;
                }
                 if(br[i]>0 && pos[i-1]==0 )
                {
                    //cout<<2<<i<<endl;
                     cout<<"NO"<<"\n";
                    flag=true;
                    break;
                }
                 if(br[i]==0 &&( pos[i]==0||neg[i]==0)){
                    //    cout<<3<<i<<endl;
                     cout<<"NO"<<"\n";
                    flag=true;
                    break;
                }
            }

    }
    if(!flag)
    cout<<"YES"<<"\n";
    }
}
