#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; scanf("%d", &n);
	string s;

	int l = 1, r = n, mid = 0, limit = 30;

	while (limit--) {
		mid = l + (r-l)/2;

		cout << "guess " << mid << "\n";
		getline(cin, s);

		if (s == "correct") break;
		else if (s == "too many tries") break;
		else if (s == "low") l = mid+1;
		else r = mid-1;
	}
}
