#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n][n], i, j, k;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cin >> ar[i][j];
        }
    }

    for (i = 0; i < n; i++){
        for (j = i, k = 0; j >= 0; j--, k++)
            cout << ar[j][k] <<" ";
    }

    for(i = 1; i <= n; i++)
        for (j = n-1, k = i; k < n; j--, k++)
            cout << ar[j][k] <<" ";
    cout << "\n";
}
