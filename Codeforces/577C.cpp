#include<bits/stdc++.h>
using namespace std;
vector <int > v;
int ar[100000];
void sieve()
{
    int i,j,n=10000;
    v.push_back(2);
    for(i=3;i<n;i+=2)
    {
        if(ar[i]==0)
        {
            ar[i]=1;
            v.push_back(i);
            for(j=i*i;j<n;j+=2*i) ar[j]=1;

        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int i,a,b,t=0,j;
//    char ch,s;
    vector <int> s;
    cin>>a;
    sieve();

    for(i=0;v[i]<=a;i++)
    {
        for(j=v[i];j<=a;j*=v[i])
        {
            s.push_back(j);
        }
    }
    cout<<s.size()<<"\n";
    for(i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }

    cout<<"\n";
}
