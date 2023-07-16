#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0, i;
    cin >> n;
    int ar[n];

    for (i = 0; i < n; i ++){
        cin >> ar[i];
    }

    sort (ar,ar+n);
    for (i = 0; i <= n/2; i++){
        cnt += ar[i]/2 + 1;
    }
    cout << cnt <<endl;
}
