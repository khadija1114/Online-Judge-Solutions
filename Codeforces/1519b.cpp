#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, d, ans;

    cin >> t;

    while(t--){
        cin >> a >> b >> d;
        if (a > b) swap(a, b);

        ans = (a - 1) * b + b - 1;

        if (ans == d) cout << "YES" ;
        else cout << "NO";
        cout << "\n";

    }

}
