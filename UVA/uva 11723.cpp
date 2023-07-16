#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=0;
    double d;
    while(true){
        cin>>n>>m;

        if(n==0||m==0) break;
        cout<<"Case "<<++i<<": ";
        d=ceil(1.0*n/m)-1;
        if(d>26) cout<<"impossible"<<endl;
        else cout<<d<<endl;
    }
}
