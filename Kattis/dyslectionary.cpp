#include<bits/stdc++.h>
using namespace std;
vector<string> v;


void input(string s)
{
	v.clear();
	while (int(s.size()) > 0) {
		reverse(s.begin(), s.end());
		v.push_back(s);
		getline(cin, s);
	}

	return ;
}

int main()
{
	string s;
	int t = 0;
	//getline(cin, s);

	while (getline(cin, s)) {

		input(s);
		sort(v.begin(), v.end());

		if (t) cout << "\n";

		int len = 0;
		for (auto it: v) {
			len = max(len, int(it.size()));
		}


		for (auto &it: v) {
			for (int i = 0; i < len-it.size(); i++) {
				cout << " ";
			}
			reverse(it.begin(), it.end());
			cout << it << "\n";
		}

	//	cout << "\n";
	t++;
	}

}

