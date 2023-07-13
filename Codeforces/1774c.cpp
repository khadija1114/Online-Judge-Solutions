#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int cone = 0, czero = 0;

        for (int i = 1; i < n; i++) {
            if (s[i-1] == '0') {
                czero++;
                cone = 0;
                cout << i-czero+1 << " ";
            }
            else {
                cone++;
                czero = 0;
                cout << i-cone+1 << " ";
            }
        }

        cout << endl;
    }
}

