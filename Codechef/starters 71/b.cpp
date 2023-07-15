#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, k; cin >> n >> k;
	    string s; cin >> s;

	    int cnt0 = 0, cnt1 = 0;
	    int one = 0, zero = 0, ans = INT_MAX;

	    for (int i = 0; i < k; i++) {
            if (s[i] == '0') {
                if (i > 0 && s[i-1] != '0') cnt0++;
                else if (i == 0) cnt0++;
            }
            else {
                if (i > 0 && s[i-1] != '1') cnt1++;
                else if (i == 0) cnt1++;
            }
	    }

            int a;
            if (s[k-1] == '1') a = 1;
            else a = 0;
            ans = min (ans, cnt0+cnt1-a);

           // cout << cnt0 << " " << cnt1 << " " << a << " " << ans << endl;


	    for (int i = 1, j = k; j < n; i++, j++) {
            if (s[i] == '1') {
                if (s[i-1] == '0') cnt0--;
            }
            if (s[i] == '0' && s[i-1] == '1') cnt1--;
            if (s[j] == '0' && s[j-1] == '1') cnt0++;
            if (s[j] == '1' && s[j-1] == '0') cnt1++;

            int a;
            if (s[j] == '1') a = 1;
            else a = 0;

            ans = min(ans, cnt0+cnt1-a);

            //cout << i << " " << j << " " << cnt0 << " " << cnt1 << " " << a << " " << ans << endl;
	    }

	    cout << ans << endl;
	}
	return 0;
}

