#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s, temp;
        int n;
        cin >> s;
        n = s.size();
        temp = s;
        sort(temp.begin(), temp.end());
      //  cout << temp << endl;


        int i, j, last;
        for (i = 0, j = 0; i < n ; i++) {
            int k = i;
            while (i < n && s[i] != temp[j]) {
                i++;
            }
            if (i < n && s[i] == temp[j]){
                j++;
                last = i;
               // cout << k << " " << i << endl;
                for ( ; k < i; k++)
                    if (s[k] < '9')
                        s[k]++;
            }
        }
        //cout << j << endl;

        char mn = '9';
        for (int k = n-1; k > last; k--) {
            if (s[k] > mn && s[k] < '9')
                s[k]++;
            mn = min(mn, s[k]);
        }

        sort(s.begin(), s.end());

        cout << s << "\n";

    }
}
