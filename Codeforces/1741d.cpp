#include<bits/stdc++.h>
using namespace std;

int MinStep (vector<int> &v)
{
   int n = v.size(), cnt = 0;

   for (int i = 1; i < n; i *= 2) {
        for (int j = 0; j+i < n; j += 2*i) {
            if (abs(v[j]-v[j+i]) == i) {
                if (v[j] > v[j+i]) {
                    swap(v[j], v[j+i]);
                    cnt++;
                }

            }
            else
                return -1;
        }
   }

   return cnt;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &it: v) cin >> it;

        cout << MinStep(v) << endl;
    }
}


