#include<bits/stdc++.h>
using namespace std;


void solve()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long ab = a*b;

    for (long long i = a+1; i <= c; i++) {
        long long need = ab/__gcd(ab, i);
        int vag = d/need;
        if (need*vag > b) {
            cout << i << " " << need*vag << endl;
            return ;
        }
    }

    cout << -1 << " " << -1 << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}



