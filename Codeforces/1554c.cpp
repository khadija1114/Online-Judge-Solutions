#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, t, m;
    cin >> t;
    while (t--){
        cin >> n >> m;

        for ( i = 0; i <= m; i++){
             cout << n << " " << i << " " << (n ^ i) << endl;
        }
        cout << endl << endl;
    }

}

