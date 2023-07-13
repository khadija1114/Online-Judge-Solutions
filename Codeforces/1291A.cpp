#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t;
    cin>>t;
    while(t--){
        int cnt=0,i,j,odd;
        int ar[10];
        string s;
        cin>>n;
        cin>>s;

        for(i=0;i<n;i++){
                if(cnt==2) break;
            if(int(s[i]-'0')%2==1)
            {
                ar[cnt++]=s[i]-'0';
            }
        }
        if(cnt!=2) cout<<-1;
        else cout<<ar[0]<<ar[1];
        cout<<endl;
    }

}
