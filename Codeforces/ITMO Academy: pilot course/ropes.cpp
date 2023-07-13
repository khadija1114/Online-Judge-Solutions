#include<bits/stdc++.h>
using namespace std;

int canMake(double len, vector<double> &v)
{
    int make = 0;
    for (auto it: v) {
        make += int(it/len);
    }

    return make;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    vector <double> v(n);
    for (auto &it: v) scanf("%lf", &it);

    double l = 0, r = 10000003, mid;
    while (r-l > 0.0000001) {
        mid = (l+r)/2;
        if (canMake(mid, v) >= k)
            l = mid;
        else
            r = mid;
    }

    cout << fixed << setprecision(7) << l << endl;
}
