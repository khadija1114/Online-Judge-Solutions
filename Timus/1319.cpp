#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, k,cnt = 1;
    cin >> n;
    int ar[n][n];

    for (i = 0; i < n; i++){
        for (j = 0, k = n - i - 1; j <= i; j++, k++){
            ar[j][k] = cnt++;
        }
    }
    for (i = 1; i < n; i++){
        for (j = i, k = 0; k < n - i; j++, k++)
            ar[j][k] = cnt++;
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            cout << ar[i][j] <<" ";
        cout << "\n";
    }

}
