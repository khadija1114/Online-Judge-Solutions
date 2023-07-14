#include <bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int>s;
void seive()
{
    int n=1000;
    int i,j,k;
    v.assign(1005,1);
    s.assign(1005,0);

    for(i=2;i<=1000;i++)
    {
        for(j=i;j<=1000;j+=i)
            v[j]++;
    }
    s[1]=1;
    for(i=2,k=2;i<=1000,k<=1000;i++)
    {
        for(j=1000;j>=2;j--)
        {
            if(v[j]==i) s[k++]=j;
        }
    }
}
int main()
{
    int n,t,i;
     seive();
   cin>>t;
   for(i=1;i<=t;i++){
    cin>>n;

    cout<<"Case "<<i<<": "<<s[n]<<endl;
   }
}
