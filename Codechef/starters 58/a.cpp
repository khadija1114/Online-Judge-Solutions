#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs = 0;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> v(n);
        long long ans = 0;
        int odd = 0;

        for (auto &it: v){
            cin >> it;
            if (it&1)
                odd = true;
            if(it%2 == 0) {
                ans++;
            }
        }

        if (!odd) {
            puts("0");
            continue;
        }

        printf("%lld\n", ans);


    }
}

