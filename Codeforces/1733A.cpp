#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        vector <int> v(n);
        for (auto &it: v) scanf("%d", &it);

        long long sum = 0;

        for (int i = 0; i < k; i++) {
            int mx = 0;
            for (int j = i; j < n; j += k) {
                mx = max(mx, v[j]);
            }

            sum += mx;
        }

        printf("%lld\n", sum);
    }
}
