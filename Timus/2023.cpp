#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    string s[n];
    for (i = 0; i < n; i++)
        cin >> s[i];

    int pre = 0, ans = 0;

    for (i = 0; i < n; i++){
        if (s[i][0] == 'A' || s[i][0] == 'P' || s[i][0] == 'O' || s[i][0] == 'R'){
            ans += pre;
            pre = 0;
        }
        else if (s[i][0] == 'B' || s[i][0] == 'M' || s[i][0] == 'S'){
            ans += abs(pre - 1);
            pre = 1;
        }
        else{
            ans += abs(pre - 2);
            pre = 2;
        }
    }

    cout << ans << "\n";
}
