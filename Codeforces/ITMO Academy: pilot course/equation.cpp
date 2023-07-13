#include<bits/stdc++.h>
using namespace std;

int main()
{
	double c; cin >> c;

	double l = 0, r = c, mid;

	while (r-l > 0.00000001) {
		mid = (l+r)/2;

		if (mid*mid + sqrt(mid) < c) l = mid;
		else r = mid;

		//cout << l << "  " << r << " " <<  mid << endl;
	}

	cout << fixed << setprecision(8) << l << endl;
}

