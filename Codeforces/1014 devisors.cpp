#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a,b,k;
    set<int> v;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        cin>>a>>b;
        cout<<"Case "<<k<<":";
        if(a-b<=b) cout<<" impossible"<<endl;
        else
        {
            n=a-b;
            int i,j=0;
            int m=sqrt(n);


            for(i=1;i<=m;i++)
            {
            if(n%i==0)
                {
                    v.insert(i);
                    v.insert(n/i);

                }
            }
           // sort(v.begin(),v.end());
            for(auto x=v.begin();x!=v.end();x++)
            {
                if(*x>b) cout<<" "<<*x;
            }
            cout<<endl;
            v.clear();
        }
    }


}
