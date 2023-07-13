#include<bits/stdc++.h>
using namespace std;

int possible(int t, int x, int y)
{
	return t/x + max(0, (t-x)/y);
}

int main()
{
	int n, x, y; cin >> n >> x >> y;
	if (x > y) swap(x, y);


	int l = 0, r = INT_MAX, mid;
	while (l < r) {
		mid = l + (r-l)/2;

		if (possible(mid, x, y) >= n) r = mid;
		else l = mid+1;
	}

	cout << l << endl;
}
