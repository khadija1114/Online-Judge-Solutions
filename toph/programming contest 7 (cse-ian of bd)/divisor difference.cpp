#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    int t,i,j,m=0;
    cin>>t;
    while (t--)
    {
        cin>>a;
        n=sqrt(a);
        for(i=n;i>0;i--)
        {
            if(a%i==0)
            {
                j=a/i;
                m++;
                cout<<"Case #"<<m<<": "<<abs(i-j)<<endl;
                break;
            }
        }
    }
}
