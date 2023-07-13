#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n, t;
    cin >> t;
    while (t--){
        cin >> n;
        if (n & 1) n++;
        n = max (n , 6LL);
        if (n == 8){
            cout << 20 << endl;
        }
        else if (n == 10){
            cout << 25 << endl;
        }
        else{
            cout << n / 2 * 5 << endl;
        }
    }
}
