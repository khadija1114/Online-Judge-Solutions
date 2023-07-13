#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t,ar[100005],k,x,y;
    bool bl[100005];
    cin>>t;
    while(t--){
        cin>>n;
        x=0;
        for(i=1;i<=n;i++){
            bl[i]=0;
        }
        for(i=1;i<=n;i++){
            cin>>k;
            bool flag=true;
            while(k--){
                cin>>y;
                if(bl[y]==0 && flag){
                    bl[y]=1;
                    flag=false;
                }
            }
            if(flag) x=i;

        }
        if(x!=0){
            cout<<"IMPROVE"<<"\n";
            for(i=1;i<=n;i++) {
                 if(bl[i]==0){
                    cout<<x<<" "<<i<<"\n";
                    break;
                 }

            }

        }
        else cout<<"OPTIMAL"<<"\n";


    }
}
