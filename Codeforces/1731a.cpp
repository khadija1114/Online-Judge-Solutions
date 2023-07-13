#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--) {
    int n;
    cin >> n;
    vector <int> v(n);
    long long ans = 1;
    for (auto &it: v) {
        cin >> it;
        ans *= it;
    }

    ans += (n-1);
    cout << 2022*ans << endl;
   }
}

