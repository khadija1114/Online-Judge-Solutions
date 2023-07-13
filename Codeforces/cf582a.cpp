
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count0=0,count1=0;
    cin>>n;
    int t=n;
    while(t--)
    {
        cin>>m;
        if(m&1) count1++;
    }
    count0=n-count1;
    cout<<min(count0,count1)<<endl;
}
