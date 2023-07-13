#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int i, j, n, k, ans = 0, a;
    string s;

    cin >> n >> k >> s;
    for (i = 0; i < n; i++){
        if(s[i] == '*') ans++;
    }
    if(ans <= 2) {
        cout << ans << endl;
        return ;
    }
    else ans = 2;

    i = 0;
    while(s[i] != '*') i++;
    while (s[n-1] != '*') n--;
    n--;
    a = 0;
    for (  ; i + k < n;i += a){
        ans++;
        //cout << i << endl;
        for (j = 1; j <= k; j++){
            if (s[i+j] == '*'){
                a = j;
            }
        }
        //cout << i+a << endl;

    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--) solve();

}
