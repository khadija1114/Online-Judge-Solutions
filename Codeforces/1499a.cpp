#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, k1, k2, w, b;
        cin >> n >> k1 >> k2 >> w >>b;
        if (w + b == 0) {
            cout << "YES" << "\n";
            continue;
        }
        else{
            k1 += k2;
            k2 = 2*n - k1;

            if(k1 >= 2*w && k2 >= 2*b){
                cout <<"YES"<<"\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
    }
}

