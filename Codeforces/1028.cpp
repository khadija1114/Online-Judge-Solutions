#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,a,b,k;
    set<long long> v;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        cin>>n;
        cout<<"Case "<<k<<":";



            int i,j=0;
            int m=sqrt(n);


            for(i=2;i<=m;i++)
            {
            if(n%i==0)
                {
                    v.insert(i);
                    v.insert(n/i);

                }
            }

            cout<<v.size()+1<<endl;
            v.clear();
    }


}

