#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long product = 1, cnt = 0;

    bool mark[n+1] = {};

    for (int i = 1; i < n; i++) {
        if (__gcd(i, n) == 1){
            mark[i] = true;
            product = (product * i) % n;
            cnt++;
        }
    }

    if (product != 1) {
        mark[product] = false;
        cnt--;
    }

    cout << cnt << endl;
    for (int i = 1; i < n; i++)
        if (mark[i])
            cout << i << " ";
    cout << endl;

}
