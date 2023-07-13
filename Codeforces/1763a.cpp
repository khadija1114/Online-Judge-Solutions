#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int _or = 0, _and = 2047;
        for (auto &it: v){
            cin >> it;
            _or |= it;
            _and = _and&it;
        }

     //   cout << _or << " " << _and << endl;
        cout << _or - _and << endl;
    }
}
