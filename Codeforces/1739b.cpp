#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs = 0;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d", &n);

        vector<int> d(n), v(n);

        for (auto &it: d) {
            scanf("%d", &it);
        }

        v[0] = d[0];
        bool flag = true;

        for (int i = 1; i < n && flag; i++) {
            int a = d[i]+v[i-1];
            int b = d[i]-v[i-1]; b *= -1;
          //  cout << i << " " << a << " " << b << endl;

            if (a >= 0 && b >= 0 && a != b) {
                puts("-1");
                flag = false;
            }

            if (a > 0)
                v[i] = a;
            else
                v[i] = b;
        }

        if (flag) {
            for (auto it: v)
                printf("%d ", it);
            puts("");
        }


    }
}

