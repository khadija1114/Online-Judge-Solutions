#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        set<int> x, y;
        x.insert(x1);
        x.insert(x2);
        x.insert(x3);
        y.insert(y1);
        y.insert(y2);
        y.insert(y3);


        if (x.size() <= 2 && y.size() <= 2) {
            puts("NO");
            continue;
        }

        puts("YES");

    }
}
