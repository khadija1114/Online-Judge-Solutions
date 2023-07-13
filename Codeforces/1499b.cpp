#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        cin >> s;
        int n = s.size(), i, j;
        bool flag = true;

        for (i = 1; i < n; i++)
        {
            if (s[i-1] == '1' && s[i] == '1')
                break;
        }

        for ( ; i < n; i++){
            if (s[i-1] == '0' && s[i] == '0')
            {
                cout << "NO" <<"\n";
                flag = false;
                break ;
            }
        }

        if (flag) cout << "YES" <<"\n";
    }
}

