#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ar[1005],t,x,y;
    bool bl[1005];
    cin>>t;
    while(t--){
        cin>>n>>x;
        for(i=0;i<1001;i++) bl[i]=0;
        for(i=0;i<n;i++) {
            cin>>ar[i];
            bl[ar[i]]=1;
        }
        y=x;
        for(i=1;i<=n+x && y; i++){
            if(bl[i]==0)
            {
               bl[i]=1;
                y--;

            }
        }
        for(i=1;bl[i]!=0 ;i++);
        cout<<i-1<<endl;
    }
}
