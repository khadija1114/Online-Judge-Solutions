#include<bits/stdc++.h>
using namespace std;

int x,y,x1,x2,y1,y2,a,b,c,d,t;
int main()
{
    cin>>t;
    while(t--){
    cin>>a>>b>>c>>d;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    x+=(b-a);y+=(d-c);
    if(x>=x1 && x<=x2 && y>=y1 && y<=y2 && (x1<x2||a+b==0) && (y1<y2||c+d==0))
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";

    }
}
