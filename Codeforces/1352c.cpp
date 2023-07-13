#include<bits/stdc++.h>
using namespace std;

int position(int n, int val)
{
    int sub = val/n;
    return val-sub;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int l = 1, r = k+k, mid;

        while (l < r) {
            mid = l + (r-l)/2;
           // cout << mid << " " << position(n, mid) << endl;

            if (position (n, mid) < k)
                l = mid+1;
            else
                r = mid;
        }


        cout << l << endl;
    }
}
