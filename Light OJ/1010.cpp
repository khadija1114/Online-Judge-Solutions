#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t, cs = 0;
    cin >> t;
    while (t--){
        cin >> a >> b;
        if (a > b) swap(a, b);
        int ab = a*b;

        cout << "Case "<< ++cs << ": ";
        if (a == 1)
            cout << ab;
        else if (a == 2){
            int ex = ab % 8;
            if (ex)
                (ex == 2) ? (ex = 2) : (ex = 4);
            cout << 4 * (ab / 8) + ex;
        }
        else{
            if (ab & 1)
                cout << ab / 2 + 1;
            else
                cout << ab / 2;
        }
        cout << "\n";
    }
}
