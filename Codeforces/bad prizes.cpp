#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,last,sum,n,m,j;
    cin>>t;
    vector<int> a;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>m;
            a.push_back(m);
        }
        last=a[n-1];
       // cout<<last<<endl;
        for(j=n-2;j>=0;j--)
        {
            if(a[j]>last) sum++;
            else last=a[j];
            //cout<<last<<endl;

        }
        cout<<sum<<endl;
        a.clear();
    }
}
