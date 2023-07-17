#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m;
    cin>>k>>n>>m;
    if(n%k==0 || m%k==0 || m/k!=n/k)
        cout<<"OK"<<endl;
    else
        cout<<"NG"<<endl;
}
