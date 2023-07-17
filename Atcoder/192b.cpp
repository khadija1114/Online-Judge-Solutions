#include<bits/stdc++.h>
using namespace std;

string s;

bool solve()
{
    int i, n = s.size();
    for (i = 0; i < n; i++)
    {
        if (i & 1){
            if (s[i] >= 'a' && s[i] <= 'z')
                return false;
        }
        else {
            if (s[i] >= 'A' && s[i] <= 'Z')
                return false;
        }
    }
    return true;
}

int main()
{
    cin>>s;
    if (solve())
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
}
