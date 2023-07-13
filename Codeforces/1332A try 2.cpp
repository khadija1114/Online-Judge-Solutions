#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,c,d,x,y,x1,x2,y1,y2;
    cin>>t;
    while(t--){
            bool ans=false;
         cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        x1=x-x1;
        x2=x2-x;
        y1=y-y1;
        y2=y2-y;
        if(x1>0&&x2>0&&y1>0&&y2>0){
            ans=true;
            cout<<1;
        }
        else if(x1>0&&x2>0&&y1>0){
            if(c-d<=y1) ans=true;
            cout<<2;
        }
         else if(x1>0&&x2>0&&y2>0){
            if(d-c<=y2) ans=true;
            cout<<3;
        }
         else if(x1>0&&y2>0&&y1>0){
            if(a-b<=x1) ans=true;
            cout<<4;
        }
         else if(x2>0&&y2>0&&y1>0){
            if(b-a<=x2) ans=true;
            cout<<5;
        }
    if(ans) cout<<"Yes";
    else cout<<"No";
    cout<<"\n";
    }


}
