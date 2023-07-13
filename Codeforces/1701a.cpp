#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        int cnt = 0;
        for (int i = 0; i < 4; i++) {
            cin >> a;
            cnt += a;
        }
        if (cnt == 0)
            cout << 0 ;
        else if(cnt == 4)
            cout << 2 ;
        else
            cout << 1;
        cout << endl;
    }
}
