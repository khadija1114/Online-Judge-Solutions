#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;
    string s;

    cin >> s;

    n = s.size();
    for (i = 0; i < n ; i++)
    {
        if (s[i] == '.') break;

        cout << s[i];
    }

    cout <<"\n";

}
