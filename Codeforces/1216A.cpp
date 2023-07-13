#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,i;
    char a,b;
    vector<char> s;

    cin>>n;
    for(i=0;i!=n;i+=2)
    {
        cin>>a>>b;
        if(a!=b){
            s.push_back(a);
           s.push_back(b);
        }
        else{
                sum++;
            if(a=='a')
            {
                s.push_back(a);
                s.push_back('b');

            }
             else
            {
                s.push_back(a);
                s.push_back('a');

            }
        }
    }
    cout<<sum<<endl;
    for(i=0;i<n;i++)
    {
        cout<<s[i];
    }
    cout<<endl;

}
