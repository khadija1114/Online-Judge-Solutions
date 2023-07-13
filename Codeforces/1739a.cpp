#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs = 0;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        if (n > 1 && m > 1)
            puts("2 2");
        else
            puts("1 1");
    }
}

