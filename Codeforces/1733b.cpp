#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);

        if (x > y) swap(x, y);

        if (y == 0 || x || (n-1)%y) {
            puts("-1");
            continue;
        }

        int p = 2;
        for (int i = 0; i < (n-1)/y; i++) {
            for (int j = 0; j < y; j++) {
                printf("%d ", p);
            }
            p += y;
        }
        puts("");

    }
}

