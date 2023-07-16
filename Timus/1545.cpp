#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    cin.ignore();
    vector<string> s(n);
    char c;

    for (i = 0; i < n; i++){
        cin >> s[i];
    }
    sort (s.begin(), s.end());

    cin >> c;
    for (i = 0; i < n; i++){
        if (s[i][0] == c) cout << s[i] << "\n";
    }
}
