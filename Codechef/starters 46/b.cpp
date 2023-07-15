#include<bits/stdc++.h>
using namespace std;

int found(int x, int y)
{
    int z = 0, i = 1;
    while (x || y)
    {
        int a = x%2, b = y%2;
        x/=2, y/=2;

        if (a != b)
        {
            z += i;
        }
        i *= 2;
    }
    return z;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z = 0;
        cin >> x >> y;
        z = found (x, y);

        int a, b, c;

        if (x%2 == 0)
            swap(x,z);
        else if (y%2 == 0)
            swap(y,z);

       // cout << x << y << z << endl;

        a = found(2, x);
        b = found(2, y);

        vector<int> ans;

        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(2);

        sort(ans.begin(), ans.end());

        for (auto it: ans)
            cout << it << " ";

        cout << endl;
    }

}

