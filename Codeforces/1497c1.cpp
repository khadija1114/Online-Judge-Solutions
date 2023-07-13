#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n, k;
    cin >> t;
    while (t--){
        cin >> n >> k;

        for (i = 0; i < k-3; i++) cout << 1 << " ";
        n -= (k-3);
        if (n & 1)
            cout << 1 << " " << n/2 << " " << n/2 << "\n";
        else if (n % 4)
            cout << 2 << " " << n/2 - 1 << " " << n/2 - 1 << "\n";
        else
            cout << n/2 << " " << n/4 << " " << n/4 << "\n";
    }
}
