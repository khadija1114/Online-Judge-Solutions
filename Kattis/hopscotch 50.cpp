#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, k;
    cin >> n >> k;
    vector <int> v[n+1];
    map<pair<int, int>, int> mp1, mp2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            v[i].push_back(a);
            if (a == 1) {
                mp1[{i, j}] = 0;
            }
        }
    }


    int cur_k = 2;
    k--;

    while (k--) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (v[i][j] == cur_k) {
                    int min_dis = 1e9;
                    for (auto it: mp1) {
                        min_dis = min (min_dis, abs(it.first.first-i) + abs(it.first.second-j) + it.second);
                    }
                    mp2[{i, j}] = min_dis;
                }
            }
        }

        mp1.clear();
        mp1 = mp2;
        mp2.clear();
        cur_k++;

    }

    int ans = 1e9;
    for (auto it: mp1) {
        ans = min(ans, it.second);
    }

    cout << ((ans == 1e9) ? -1 : ans) << endl;

}


