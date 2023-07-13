#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int i, j, n, m, k, temp, l;
    string s, c;
    int ans = 0;
    cin >> s >> c;
    n = s.size(), m = c.size();

    for (i = 0; i < n; i++){
        for (j = 0; j < m ; j++){
                l = j; k = i;
                temp = 0;
            while (s[k] == c[l] && k < n && l < m){
                k++;
                l++;
                temp++;
            }
            ans = max(ans, temp);
        }
    }

    cout << n+m-2*ans << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--) solve();

}
