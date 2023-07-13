#include<bits/stdc++.h>
using namespace std;
const int N = 200000;
int diff[N+2];

int main()
{
    int n, k, i, j, cnt = 0, l, r, q;

    cin >> n >> k >> q;

    for (i = 0; i < n; i++){
        cin >> l >> r;
        diff[l]++;
        diff[r+1]--;
    }

    for (i = 1; i <= N; i++){
        diff[i] += diff[i-1];
    }
    for (i = 1; i <= N; i++){
        if(diff[i] >= k) diff[i] = 1;
        else diff[i] = 0;
        diff[i] += diff[i-1];
    }

    while (q--){
        cin >> l >> r;

        cout << diff[r] - diff[l-1] << "\n";
    }
}
