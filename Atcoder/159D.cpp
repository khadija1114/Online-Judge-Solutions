#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    long long total=0,x;
    map<long long,long long> mp;
    cin>>n;
    int ar[n+2];
    for(i=0;i<n;i++){
        cin>>ar[i];
        mp[ar[i]]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        x=(*it).second;
        total+=x*(x-1)/2;
    }
    for(i=0;i<n;i++){
        x=mp[ar[i]];
        total-=x*(x-1)/2;
        x--;
        total+=x*(x-1)/2;
        cout<<total<<"\n";
        total-=x*(x-1)/2;
        x++;
        total+=x*(x-1)/2;
    }
}
