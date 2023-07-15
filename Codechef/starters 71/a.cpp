#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<int> type(105);
	    for (int i = 0; i < n; i++) {
	        int a;
	        cin >> a;
	        type[a]++;
	    }

	    bool ans = true;
	    for (int i = 1; i < 101; i++) {
	        if (type[i]&1)
	        ans = false;

	    }

	    if (ans) puts("YES");
	    else puts("NO");
	}
	return 0;
}
