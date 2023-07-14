#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;
    int al[]={1,0,1},bo[]={0,1,1};
    string st;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>st;
        n=n%3;
        cout<<"Case "<<i<<": ";
        if(st=="Alice")
        {
            if(al[n]) cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }
        else{
            if(bo[n]) cout<<"Bob"<<endl;
            else cout<<"Alice"<<endl;


        }
    }


}
