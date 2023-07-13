#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1) cout<<-1<<"\n";
        else {
            for(i=1;i<n;i++) cout<<5;
            cout<<4<<"\n";
        }
    }
}
