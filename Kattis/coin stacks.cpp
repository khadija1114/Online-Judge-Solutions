#include<bits/stdc++.h>
using namespace std;

void findRemoved(vector <int> &v, int n, int &sum)
{
    int mx1 = 0, mx2 = 0, p1, p2;

    for (int i = 0; i < n; i++) {
        if (v[i] > mx1) {
            mx2 = mx1; p2 = p1;
            mx1 = v[i]; p1 = i;
        }
        else if (v[i] > mx2) {
            mx2 = v[i]; p2 = i;
        }
    }

    sum-=2;
    v[p1]--;
    v[p2]--;

    cout << p1+1 << " " << p2+1 << "\n";
}

int main()
{
    int n, sum = 0, mx = 0;
    cin >> n;
    vector <int> v(n);
    for (auto &it: v) {
        cin >> it;
        sum += it;
        mx = max(it, mx);
    }

    if (sum & 1 || sum-mx < mx) {
        puts("No");
        return 0;
    }
    puts("Yes");
    while (sum > 0) {
        findRemoved(v, n, sum);
    }


}
