#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int vow = 0;
    string ans = s;
    if (isVowel(s[n-1])) vow++;

    for (int i = n-2, j = 0 ,k = n-2; i >= 0; i--) {
        if (vow&1){
            ans[j++] = s[i];
        } else {
            ans[k--] = s[i];
        }
        if (isVowel(s[i]))
            vow++;
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

}
