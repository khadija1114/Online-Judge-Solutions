#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,ar[1003],br[1003],i=0,l,r,x=0,y=0;
    string s;
    cin>>s;
    l=0,r=s.size()-1;
    while(l<r){
        while(l<s.size()-1&&s[l]==')') l++;
        while(r>0&&s[r]=='(') r--;

        if(l<r&&l<s.size()-1&&r>0){
            ar[x++]=l+1;
            br[y++]=r+1;
            l++;
            r--;
        }
    }
    if(!x) cout<<0<<"\n";
    else
    {
        cout<<1<<"\n";
        cout<<x+y<<"\n";
        for(i=0;i<x;i++) cout<<ar[i]<<" ";
        for(i=y-1;i>=0;i--) cout<<br[i]<<" ";
        cout<<"\n";

    }


}
