#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j;
    int a, b, c, d, mx = -1000000;
    cin >> a >> b >> c >> d;
    for (i = a; i <= b; i++){
        for (j = c; j <= d; j++)
            mx = max (mx, i - j);
    }

    cout << mx <<  endl;
}
