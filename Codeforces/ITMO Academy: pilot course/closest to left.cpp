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

        int l = 0, r = n-1, mid;
        while (l < r) {
            mid = l + (r-l+1)/2;

            if (v[mid] > val)
                r = mid-1;
            else
                l = mid;
        }
        if (l == 0 && v[l] > val)
            printf("%d\n", l);
        else
            printf("%d\n", l+1);
    }
}
