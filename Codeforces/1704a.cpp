#include<bits/stdc++.h>
using namespace std;

bool solve()
{
    int n, m;
    string s1, s2;
    cin >> n >> m >> s1 >> s2;

    int i = 0, j;
    for (i = m-1, j = n-1 ; i >= 0; i--, j--) {
        if (s1[j] != s2[i])
            break;
    }

    if (i < 0) {
        return true;
    }
    if (i > 0)
        return false;

    for ( ; j >= 0; j--) {
        if (s1[j] == s2[0])
            return true;
    }

    return false;


}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        if (solve())
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}
