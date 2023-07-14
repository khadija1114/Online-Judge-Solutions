#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    vector<long long> presum(n);

    for (auto &it: presum) scanf("%lld", &it);

    for (int i = 1; i < n; i++)
        presum[i] += presum[i-1];

    while (q--) {
        int l, r;
        scanf("%d %d", &l, &r);
        l--, r--;
        if (l == 0)
            printf("%lld\n", presum[r]);
        else
            printf("%lld\n", presum[r]-presum[l-1]);
    }
}
