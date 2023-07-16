#include<bits/stdc++.h>
#define pi 2 * acos(0.0)
using namespace std;


double dis(double x1, double x2, double y1, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    int n, i;
    double r, ans = 0, x1, y1, x2, y2, x, y;
   // cout << pi << "\n";
    cin >> n >> r;
    cin >> x1 >> y1;
    x = x1, y= y1;
    for (i = 0; i < n-1; i++){
        cin >> x2 >> y2;
        ans += dis (x1, x2, y1, y2);
        x1 = x2, y1 = y2;
    }
    ans += dis (x, x1, y, y1);
    ans += 2 * pi * r;

    cout << fixed << setprecision(2) << ans << "\n";
}
