#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if ( n == 2 ){
        cout << -1 << "\n";
        return ;
    }

    int ar[n][n] , i, j, cnt = 1;

    for (int flg = 0; flg < 2; flg ++){
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                if ((i+j) % 2 == flg){
                    ar[i][j] = cnt++;
                }
            }
        }
    }


    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            cout << ar[i][j] << " ";
        cout << endl;
    }
}


int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


