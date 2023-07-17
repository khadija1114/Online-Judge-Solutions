#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, a = 0, b = 0;
    string s;
    cin >> s;
    n = s.size();
    if (n == 2  && s[1] == '0' ){
        cout << s[0] - '0' - 1 << endl;
        return 0;

    }
    if (n == 1){
        cout << 0 << endl;
        return 0;
    }
    if(n & 1){
        for (i = 1; i <= n/2 ; i++){
            a = a * 10 + (s[i] - '0');
        }

        for (i = n/2 + 1; i < n; i++){
            b = b*10 + (s[i] - '0');
        }

 //       cout << a << " " << b << "\n";
    }
    else{
        for (i = 0; i <= n/2 - 1 ; i++){
            a = a * 10 + (s[i] - '0');
        }

        for (i = n/2; i < n; i++){
            b = b*10 + (s[i] - '0');
        }

   //     cout << a << " " << b << "\n";
    }

    int ans = min (a, b);

    if(ans == 0){
        if (a + b == 0)
        {
            for (i = 0; i < n/2 ; i++)
            cout << 9;
        }
        else
        cout << max (a, b) - 1 << "\n";
    }

    else cout << ans << endl;
}
