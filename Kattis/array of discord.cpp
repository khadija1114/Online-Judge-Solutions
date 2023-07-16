#include<bits/stdc++.h>
using namespace std;

long long toInteger(string s)
{
    long long n = 0, base = 1;
    for (int i = s.size()-1; i >= 0; i--) {
        n +=  base*(s[i]-'0');
        base *= 10;
    }
    return n;
}

bool isSorted(vector<string> &v)
{
    long long s1, s2;
    for (int i = 0; i < v.size(); i++) {

        if (i == 0) {
            s1 = toInteger(v[i]);
            continue;
        }
        s2 = s1;
        s1 = toInteger(v[i]);

       // cout << s1 << " " << s2 << endl;

        if (s1 < s2)
            return false;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    vector <string> v(n);
    for (auto &it: v) cin >> it;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < int(v[i].size()); j++) {
            char ch = v[i][j];
            for (char k = '0'; k <= '9'; k++) {
                if (k == ch)
                    continue;
                if (v[i].size()>1 && k == '0')
                    continue;

                v[i][j] = k;
               // cout << v[i] << endl;
                if (!isSorted(v)) {
                    //cout << v[i] << endl;
                    for (auto it: v)
                        cout << toInteger(it) << " ";
                    cout << "\n";
                    return 0;
                }
            }

            v[i][j] = ch;
        }
    }

    puts("impossible");

    //main();
}
