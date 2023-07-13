#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    string s;
    map <string , int > mp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        mp[s]++;
        if(mp[s]>1) cout<<s<<mp[s]-1<<endl;
        else cout<<"OK"<<endl;
    }
}
