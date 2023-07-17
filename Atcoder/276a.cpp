#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int pos = -1;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == 'a')
            pos = i+1;

    cout << pos << endl;
}
