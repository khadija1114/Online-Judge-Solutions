#include<bits/stdc++.h>
using namespace std;
string s;

bool solve()
{

	int sum = 0;
	for (auto it: s) {
		if (it >= 'a' && it <= 'z') sum += it-'a'+1;
		else sum += it-'A'+1+26;
	}


	for (int i = 2; i <= sum/i; i++) {
		if (sum % i == 0) return 0;
	}

	return 1;
}

int main()
{
	while (cin >> s)
		if (solve()) puts("It is a prime word.");
		else puts("It is not a prime word.");
}
