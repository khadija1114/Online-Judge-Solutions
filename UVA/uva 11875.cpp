#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,t,j;
    cin>>t;
    while(t--){
        int n,ar[100];
        cin>>n;
        for(j=0;j<n;j++){
            cin>>ar[j];
        }
        cout<<"Case "<<++i<<": "<<ar[n/2]<<endl;

    }
}
