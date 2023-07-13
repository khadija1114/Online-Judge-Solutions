#include<bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b)
{
    if (a == 0)
        return b;
    return GCD(b%a , a);
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0 && c == 0) {
            cout << 0 << endl;
            continue;
        }
        else if (a == 0 || c == 0) {
            cout << 1 << endl;
            continue;
        }


        else if ((a*d) % (b*c) == 0 || (b*c) % (a*d) == 0) {
            if ( a*d == b*c )
                cout << 0 << endl;
            else
                cout << 1 << endl;
            continue;
        }
        else
            cout << 2 << endl;


    }
}
