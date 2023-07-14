#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;

    long int i,n,j,b,d,k;
    string a;

    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        d=0;
        if(a[0]=='-')  j=1;
        else j=0;

        n=a.length();

        for( ;j<n;j++)
        {
            d=d*10+(a[j]-'0');
            d=d%b;
        }

        cout<<"Case "<<i+1<<": ";
        if(d) cout<<"not divisible"<<endl;
        else cout<<"divisible"<<endl;



    }


    return 0;
}
