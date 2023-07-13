#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    if (n&1) {
        if (n == 3){
            puts("NO");
            return ;
        }
        int m = n-2;
        int a = m/2 + 1, b = m/2;

        int x = b*a;
        int y = a*x/b;
//        if (x > 5000 || y > 5000) {
//            puts("NO");
//            return ;
//        }

            int gcd = __gcd(x, y); x /= gcd, y /= gcd;
        puts("YES");
        for (int i = 0; i < n/2; i++)
            cout << -x << " " << y << " ";
        cout << -x << endl;



        return ;
    }

    puts("YES");
    for (int i = 0; i < n/2; i++)
        cout << 1 << " " << -1 << " ";
    cout << endl;
}

int main()
{
   int t; cin >> t;
   while (t--) solve();
}

