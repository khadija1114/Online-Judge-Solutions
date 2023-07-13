#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x=0,y=0,a,b,k,i,xx=0,yy=0,j;
    cin>>n>>m>>k;
    for(i=0;i<k;i++){
        cin>>a>>b;
        x=max(x,a),y=max(b,y);
    }
    for(i=0;i<k;i++){
        cin>>a>>b;
        xx=max(xx,a),yy=max(yy,b);
    }
    cout<<x+y+xx*yy-3<<"\n";
    for(i=1;i<x;i++){
        cout<<'U';
    }
    for(j=1;j<y;j++){
            cout<<'L';
        }
    for(i=1;i<=xx;i++){
        for(j=1;j<yy && (i&1);j++){
            cout<<'R';
        }
        for(j=1;j<yy && !(i&1);j++){
            cout<<'L';
        }
        if(i!=xx)
            cout<<'D';
    }
    cout<<"\n";
}
