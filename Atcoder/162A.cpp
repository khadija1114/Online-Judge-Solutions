#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    bool ans=true;
    for(int i=0;i<n.size();i++)
        if(n[i]=='7') ans=false;
    if(ans) cout<<"No";
    else cout<<"Yes";
    cout<<"\n";
}
