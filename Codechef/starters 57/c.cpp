
#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;

void output(int pos, int sz)
{
    for (int i = pos+1; i < sz; i++) {
        v.push_back({pos+1, pos+2});
    }
    for (int i = pos-1; i >= 0; i--) {
        v.push_back({i+1, i+2});
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        v.clear();

        int one = 0, zero = 0, z1 = -1, z2, o1 = -1, o2;
        for (int i = 0; i < n; i++)
            if (s[i] == '0') {
                zero++;
                if (z1 == -1)
                    z1 = i;
                z2 = i;
            }
            else {
                one++;
                if (o1 == -1)
                    o1 = i;
                o2 = i;
            }


        if (one == 0 || zero == 0) {
            cout << n << " " << 0 << "\n";
            continue;
        }

        int bit = 0;
        if (one < zero)
            bit = 1;

        int bitAr[n] = {};

        for (int i = 0; ; i++) {
            int j = 0, last = 0;
            while (j < n && s[j] != '0'+bit)
                j++;
            last = j;
            int first = j;
            int cnt = 1;
            for (int k = j+1; k < n; k++) {
                if (s[k] == '0'+bit)
                    cnt++;
                else
                    cnt--;

                if (!cnt)
                    last = k;
            }

            if (cnt) {
                for (int k = j-1; k >= 0; k--) {
                    if (s[k] == '0'+bit)
                        cnt++;
                    else
                        cnt--;

                    if (!cnt)
                        first = k;
                }
            }

            v.push_back({first, last});
            if (first == 0 && last == n-1)
                break;

            for (int j = first; j <= last; j++)
                bitAr[j] = 1;
        }

        cout << 1 << " " << v.size() << endl;
        for (auto it: v)
            cout << it.first << " " << it.second << " " << bit << "\n";

    }
}


