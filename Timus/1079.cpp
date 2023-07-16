#include<bits/stdc++.h>
using namespace std;

int main()
{
    int maxN = 1e5 + 2, n , i;
    int pre[maxN] = {} , ans[maxN] = {};

    pre[1] = 1, ans[1] = 1;
    for (i = 2; i < maxN; i++){
        if (i % 2){
            pre[i] = pre[i/2] + pre[i/2 + 1];
            ans[i] = max (pre[i], ans[i-1]);
        }
        else{
            pre[i] = pre[i/2];
            ans[i] = ans[i-1];
        }
    }

    while (cin >> n && n){
        cout << ans[n] << "\n";
    }
}
