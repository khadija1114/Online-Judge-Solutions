#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,b,n,s,x,y;
    cin>>t;
    while(t--){
        cin>>a>>b>>n>>s;
        x=s/n;
        y=x*a;
        if(s%n<=b&&x<=a) cout<<"YES"<<endl;
        else if(s-a*n<=b&&x>a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
