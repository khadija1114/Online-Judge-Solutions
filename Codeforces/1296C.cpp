#include<bits/stdc++.h>
using namespace std;
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
    int t,i,n,m;
    string s;
    cin>>t;
    while(t--){
            int a4,b4,flag=0;
        cin>>n>>s;
        for(i=1;i<n;i++)
        {
            if(int(s[i]+s[i-1])==153||int(s[i]+s[i-1])==158){
               cout<<i<<" "<<i+1;
               flag=1;
               break;


            }
            else if(i>=3&&int(s[i-3]+s[i-2]+s[i-1]+s[i])==311){
                flag=2;
                a4=i;
                b4=i-3;

            }
        }
        if(flag==2) cout<<b4+1<<" "<<a4+1;
        else if(!flag) cout<<-1;
        cout<<"\n";
    }
}
