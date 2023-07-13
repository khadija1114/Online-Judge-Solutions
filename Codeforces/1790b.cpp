#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s, r;
    cin >> n >> s >> r;

    n--;
    cout << s-r << " ";

    int a = r/n, mod = r%n;

    for (int i = 0; i < mod; i++){
        cout << a+1 << " ";
        n--;
    }
    for (int i = 0; i < n; i++)
        cout << a << " ";
    cout << endl;

}

int main()
{
    int t; cin >> t;
    while (t--) {
        solve();
    }
}

