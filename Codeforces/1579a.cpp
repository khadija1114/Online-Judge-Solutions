#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        a = b = c = 0;
        for (auto it: s){
            if (it == 'A') a++;
            else if (it == 'B') b++;
            else c++;
        }

        if (a + c == b) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }

}
