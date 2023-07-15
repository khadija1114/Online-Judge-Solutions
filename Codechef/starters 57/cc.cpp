#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int one = 0, zero = 0;
        for (auto it: s)
            if (it == '1') one++;
            else zero++;

        if (one == 0 || zero == 0) {
            cout << n << " 0\n";
            continue;
        }

        cout << "1 " << abs(one-zero)+1 << "\n";

        for (int i = 0; i < abs(one-zero); i++) {
            for (int j = 0; j < s.size()-1; j++) {
                if (s[j] != s[j+1]) {
                    cout << j+1 << " " << j+2 << " " << (one<zero) << "\n";
                    string t = "";
                    char bit;
                    if (one > zero) bit = '0';
                    else bit = '1';

                    for (int k = 0; k < s.size(); k++)
                        if (k != j && k != j+1)
                            t += s[k];
                        else if (k == j)
                            t += bit;

                    s = t;
                    break;
                }
            }
        }

        cout << 1 << " " << s.size() << " " << "0\n";
    }
}
