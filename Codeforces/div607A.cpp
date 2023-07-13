#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i=1,a,b,t=0;
    string ch,s;

    cin>>t;
   while(t--)
    {
        cin>>ch;
        a=ch.length();
        if(ch[a-1]=='o') cout<<"FILIPINO";
        else if(ch[a-1]=='u') cout<<"JAPANESE";
        else cout<<"KOREAN";
        cout<<"\n";
    }

}
