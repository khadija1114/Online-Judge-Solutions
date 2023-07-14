#include<bits/stdc++.h>
using namespace std;
int main()

{
    string s;
    int n,i,t,j,count=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        count=0;
        cin>>s;
        n=s.size();
        if(n==1)
        {
           count=0;
        }
        else{
            for(j=0;j<n/2;j++)
            {
                if(s.at(j)!=s.at(n-1-j))
                {
                    count=1;
                    break;
                }

            }
        }
        if(count==1)
        {
             cout<<"Case "<<i<<": "<<"No"<<endl;
        }
        else{
             cout<<"Case "<<i<<": "<<"Yes"<<endl;
        }
    }


}
