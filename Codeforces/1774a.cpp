#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s;
        int n;
        cin >> n >> s;
        int one = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] == '1') {
                if (one&1) cout << "+";
                else cout << "-";
                one++;
            }
            else cout << "+";
        }
        cout << endl;
    }
}
