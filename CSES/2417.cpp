#include<bits/stdc++.h>
using namespace std;
const int maxN = 1000005;
int comp[maxN];
map<int, int> freq;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for (auto &it: v) {
        cin >> it;
        freq[it]++;
    }

    int ans = 0;

    for (auto it: freq) {
        int i = it.second;
            for (int j = i; j < maxN; j += i) {
                comp[j] += freq[i];
            }

            ans += (n - comp[i]);
            cout << it.first << " " << it.second << " " << comp[i] << endl;
    }

    cout << ans << endl;


}


