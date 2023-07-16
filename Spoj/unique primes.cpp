#include<bits/stdc++.h>
using namespace std;
vector<bool> v(100000005,0);
void prime( )
{
    int i,j;
    v[1]=1;
    for(i=4;i<=100000002;i+=2) v[i]=1;
    for(i=3;i*i<=100000002;i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i;j<=10000002;j+=i)
            {
                v[j]=1;

            }
        }
    }

}
int main()
{
    int i,j,n,m,mid,hi,lo;
    vector<int> ar;
    cin>>n;
    prime();
    for(i=1;i*i<=100000002;i++)
    {
        for(j=1;j*j*j*j<100000002;j++)
        {
            if(!v[i*i+j*j*j*j])
                ar.push_back(i*i+j*j*j*j);
        }
    }
    hi=ar.size()-1;
    lo=0;
    sort(ar.begin(),ar.end());
    unique(ar.begin(),ar.end());

}
