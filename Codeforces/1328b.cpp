#include<bits/stdc++.h>
using namespace std;

long long countLeft(int n)
{
    return 1LL*n*(n+1)/2 + 1;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    string s = "";
    for (int i = 0; i < n; i++) s += 'a';



    int l = 0, r = n-2, mid;

    while (l < r) {
        mid = l + (r-l+1)/2;
       // cout << l << " " << r << " " << mid << " " << countLeft(mid) << endl;
        if (countLeft(mid) > k)
            r = mid-1;
        else
            l = mid;
    }

   // cout << l << endl;
   s[n-2-l] = 'b';
   //cout << s << endl;

   int durotto = k - countLeft(l);
   s[n-1-durotto] = 'b';

   cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
