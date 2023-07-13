#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,t,c,r;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>r;
        if(a>b) swap(a,b);
        if(c+r>=b&&c-r<=a) cout<<"0";
        else if((c+r<b&&c+r<a)||(c-r>a&&c-r>b)) cout<<b-a;
        else if(c+r>=b) cout<<c-r-a;
        else if(c-r<=a) cout<<b-c-r;

        else cout<<b-a-2*r;
        cout<<'\n';
    }
}
