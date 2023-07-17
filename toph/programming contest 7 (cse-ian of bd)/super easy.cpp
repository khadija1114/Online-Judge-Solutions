#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    int t,i;
    cin>>t;
    while (t--)
    {
        cin>>a;
        if(a%2==0)
        cout<<(2*a)<<endl;
        else
            cout<<2*a-2<<endl;
    }
}
