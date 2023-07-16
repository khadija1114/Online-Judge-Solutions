#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n <= 0)
        cout << 1 - n * (n - 1) / 2 << "\n";
    else
        cout << n * (n + 1) / 2 << "\n";
}
