#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
    cin>>n>>m;
    if(sqrt(n)>=m && n%2==m%2) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
    }
}
