#include<bits/stdc++.h>
using namespace std;
const int maxN = 1000006;
bool comp[maxN];
vector<int> spf(maxN);

void sieve()
{
    for (int i = 1; i < maxN; i++) spf[i] = i;

    for (int i = 2; i < maxN/i; i++) {
        if (spf[i] == i) {
            for (int j = i*i; j < maxN; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

bool solve()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int now1 = -1, now2 = -1;

    while (a > 1 && b > 1) {
        int pa = 0, pb = 0;
        int sa = spf[a], sb = spf[b];

        if (sa != sb)
            return false;

        while (a%sa == 0) {
            a /= sa;
            pa++;
        }
        while (b%sb == 0) {
            b /= sb;
            pb++;
        }

        int gcd = __gcd(pa, pb);
        pa/=gcd; pb/=gcd;

        if (now1 == -1) {
            now1 = pa;
            now2 = pb;
        } else {
            if (now1 != pa || now2 != pb)
                return 0;
        }
    }

    if (a != b)
        return 0;

    return 1;
}

int main()
{
    sieve();

    int t, cs = 0;
    scanf("%d", &t);
    while (t--) {
       if (solve())
            puts("YES");
       else
            puts("NO");
    }
}



