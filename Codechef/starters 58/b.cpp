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
        map<int, int> mp;
        int ans = 0;

        for (auto &it: v){
            scanf("%d", &it);
            mp[it]++;
        }

        int mx = 0;

        for (auto it:mp)
            mx = max(mx, it.second);

        ans = 0;
        long long a = 1;
        while (a < mx) {
            a*=2;
            ans++;
        }


        printf("%d\n", ans);


    }
}


