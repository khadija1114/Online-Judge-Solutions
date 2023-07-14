#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,count;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        count=0;
        cin>>n;
        while(n!=0)
        {
            if(n%2==1)
            {
                count++;
            }
            n=n/2;
        }
        if(count%2==0)
        {
            cout<<"Case "<<i<<": "<<"even"<<endl;
        }
        else{
            cout<<"Case "<<i<<": "<<"odd"<<endl;
        }
    }
}
