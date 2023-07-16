#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    double ans;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1) cout<<fixed<<setprecision(3)<<0.000<<endl;
        else if(n%2) cout<<fixed<<setprecision(3)<<n*n+0.414<<endl;
        else cout<<fixed<<setprecision(3)<<double(n*n)<<endl;
    }
}
