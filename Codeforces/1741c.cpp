#include<bits/stdc++.h>
using namespace std;

int count_seg(vector<int> &v, int seg)
{
    int sum = 0, sz = 0, i;
    for (i = 0; i < seg; i++)
    sum += v[i];

    int temp = 0;
    for (i = 0 ; i < v.size(); i++) {
        temp += v[i];
        sz++;
        if (temp == sum) {
            seg = max(seg, sz);
            temp = 0;
            sz = 0;
        }
        else if (temp > sum)
            return INT_MAX/2;
    }

    if (temp)
        return INT_MAX/2;

    return seg;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &it: v) cin >> it;

        int seg = 1, ans = INT_MAX/2;

        for (int i = 0; i < n; i++, seg++) {
            int here = count_seg(v, seg);

            ans = min(ans, here);
            if (ans <= seg)
                break;
        }

        cout << ans << endl;
    }
}

