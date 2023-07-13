#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,d,c,x,y,x1,x2,y1,y2,m,n;
    cin>>t;
    while(t--){
            int ans=0;
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        m=a-b;
        n=c-d;
        x1=abs(x-x1);x2=abs(x-x2);y1=abs(y-y1);y2=abs(y-y2);
        if(m>0){
            if(x1>=m) ans++;
        }
        else {
            if(b-a<=x2) ans++;
        }
        if(n>0){
            if(y1>=n) ans++;
        }
        else {
            if(d-c<=y2) ans++;
        }
        if(ans==2) cout<<"Yes";
        else cout<<"No";
        cout<<"\n";
    }

}
