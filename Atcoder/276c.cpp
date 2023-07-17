#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    vector <int> v(n);
    vector <bool> found(n+1);

    for (auto &it: v) cin >> it;
    int pos = n-1, a;

    for (int i = n-1; i > 0; i--) {
        found[v[i]] = true;

        if (v[i-1] > v[i]) {
            found[v[i-1]] = true;
            pos = i-1;

            for (int j = v[pos]-1; j > 0; j--)
                if (found[j]) {
                    v[pos] = j, found[j] = 0;
                    break;
                }


            for (int j = pos+1, k = n; j < n; j++, k--) {
                while (!found[k]) k--;
                v[j] = k;
                //cout << j << " " << k << endl;
            }

            break;
        }
    }

    for (auto it: v)
        cout << it << " ";
    cout << endl;

   // main();

}
