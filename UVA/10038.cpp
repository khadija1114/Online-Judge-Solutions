#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,t,ar[3004];
    bool bl[3004],flag;
    while(scanf("%d",&n)!=EOF){
        memset(bl,0,sizeof(bl));
        flag=0;
            cin>>ar[0];
        for(i=1;i<n;i++) {
            cin>>ar[i];
            bl[abs(ar[i-1]-ar[i])]=1;
        //    cout<<ar[i-1]-ar[i]<<" ";
        }
        for(i=1;i<n;i++){
            if(!bl[i]){
                cout<<"Not jolly"<<"\n";
                flag=1;
            //    cout<<bl[i];
                break;
            }
        }
        if(!flag) cout<<"Jolly"<<"\n";
    }
}
