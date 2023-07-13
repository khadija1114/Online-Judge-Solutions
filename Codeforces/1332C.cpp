#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,k,j,cnt,loop,todl;
    cin>>t;
    while(t--){
        string s;
        cin>>n>>k>>s;
        cnt=n;
        for(j=0;j<k;j++){
            int ar[26]={};
            for(i=j;i<n;i+=k){
                ar[int(s[i]-'a')]++;
            }
            sort(ar,ar+26);
            cnt-=ar[25];
        }
        cout<<cnt<<endl;
    }
}
