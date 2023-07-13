#include<bits/stdc++.h>
#define w(x) scanf("%d",&x);while(x--)
#define endl "\n"
using namespace std;

int t;

bool solve()
{
    int n;
    cin >> n;

    assert(n != -1);

    int l = 1, r = n, mid;

    while (l < r) {
        mid = (l+r)/2;

        cout << "? " << l << " " << mid << endl;
        cout.flush();
        int a, cnt = 0;


        for (int i = 0; i < mid-l+1; i++) {
            cin >> a;
            assert(a > 0);
            if (a >= l && a <= mid)
                cnt++;
        }

        if (cnt&1) r = mid;
        else l = mid+1;
    }

    cout << "! " << r << endl;


}



int main()
{
    w(t)
    {
        solve();
    }
}



