#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+2;
int mark[N];

int main()
{
    int n, m, mx = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        mark[m]++;
        mx = max(m, mx);
    }

    for (int i = mx; i; i--) {
        int div = 0;
        for (int j = i; j <= mx; j += i) {
            div += mark[j];
        }

        if (div > 1) {
            cout << i << endl;
            return 0;
        }
    }


}
