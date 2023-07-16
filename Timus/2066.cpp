#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    if(b==1) cout<<a-b-c<<endl;
    else if(b)
    cout<<a-b*c<<endl;
    else cout<<-c<<endl;
}
