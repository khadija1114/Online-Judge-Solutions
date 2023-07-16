#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,t;
    double d,u,v,t1,t2;
    cin>>t;
    while(t--){
        cin>>d>>v>>u;
        cout<<"Case "<<++i<<": ";
        if(v>=u) {
            printf("can't determine\n");
            continue;
        }

        t1=d/u;
        t2=d/sqrt(u*u-v*v);
        if(t1==t2){
            printf("can't determine\n");
            continue;
        }

        cout<<fixed<<setprecision(3)<<t2-t1<<endl;
    }
}
