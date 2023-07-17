#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>s;
    n=s.size();
    string c(s.rbegin(),s.rend());
    string s1(s.begin(),s.begin()+n/2);
    string c1(s1.rbegin(),s1.rend());
    string s2(s.begin()+1+n/2,s.end());
    string c2(s2.rbegin(),s2.rend());
   // cout<<c<<" "<<s1<<" "<<c1<<" "<<s2<<" "<<c2<<endl;

   if(s==c && s1==c1 && s2==c2) cout<<"Yes"<<"\n";
   else cout<<"No"<<"\n";
}
