#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,t,i,dig,j,count,num;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n>>dig;
        count=1;
        num=dig;
        while(dig%n!=0){
           dig=(dig*10+num)%n;
           count++;
        }
        cout<<"Case "<<i<<": "<<count<<"\n";
    }
}
