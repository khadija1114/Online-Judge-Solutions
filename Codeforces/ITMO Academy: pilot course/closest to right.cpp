#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    scanf("%d %d" ,&n, &q);
    vector<int> v(n);
    for (auto &it: v) scanf("%d", &it);

    while (q--) {
        int val;
        scanf("%d", &val);

        int l = 0, r = n, mid;
        while (l < r) {
            mid = l + (r-l)/2;

            if (v[mid] < val)
                l = mid+1;
            else
                r = mid;
        }

        printf("%d\n", l+1);
    }
}
