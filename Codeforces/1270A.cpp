#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
  //  cin_TIE(NULL);
    int i,t,a,b,x,y,n;
    cin>>t;

    while(t--)
    {
        int flag=0;
        cin>>n>>x>>y;
        for(i=0;i<x;i++)
        {
            cin>>a;
            if(a==n) {
                    flag=1;
            }

        }
        for(i=0;i<y;i++) cin>>a;
        if(flag==0)
            cout<<"NO"<<'\n';
          else cout<<"YES"<<'\n';
    }


}
