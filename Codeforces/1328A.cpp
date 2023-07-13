#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,t;
    cin>>t;
    while(t--){
    cin>>n>>m;
    n=n%m;
    if(n==0) cout<<0<<endl;
    else cout<<m-n<<endl;
    }
}
