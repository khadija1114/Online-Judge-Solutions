#include<bits/stdc++.h>
using namespace std;

class chocolate {
public:
    int temp, a, b;
    chocolate() {
        temp = 0;
        a = 0;
        b = 0;
    }
    chocolate(int t, int x, int y) {
        temp = t;
        a = x;
        b = y;
    }
};

bool cmp (chocolate x, chocolate y)
{
    if (x.temp < y.temp)
        return true;

    if (x.temp == y.temp && x.a < y.a)
        return true;

    if (x.temp == y.temp && x.a == y.a && x.b < y.b)
        return true;

    return false;
}

int main()
{
    int k;
    cin >> k;
    int maxsum = 0, minsum = 0;
    vector <chocolate> v(k);
    for (int i = 0; i < k; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        chocolate choco(a, b, c);
        v[i] = choco;
        maxsum += c;
        minsum += b;
    }
    sort(v.begin(), v.end(), cmp);

//    for (auto it: v)
//        cout << it.temp << " " << it.a << " " << it.b << endl;

    int q;
    cin >> q;
    while (q--) {
        int r, phi;
        cin >> phi >> r;
        if (r < minsum || r > maxsum) {
            puts("no");
            continue;
        }

        long long maxtemp = 0, mintemp = 0;

        for (int i = 0; i < k; i++) {
            maxtemp += 1LL * v[i].temp * v[i].a;
        }
        mintemp = maxtemp;
       // cout << mintemp << endl;

        for (int i = 0, need = r-minsum; i < k && need; i++) {
            int got = min(v[i].b-v[i].a, need);
            need -= got;
            mintemp += 1LL*got*v[i].temp;
        }

        for (int i = k-1, need = r-minsum; i >= 0 && need; i--) {
            int got = min(v[i].b-v[i].a, need);
            need -= got;
            maxtemp += 1LL*got*v[i].temp;
        }

        mintemp = ceil(1.0 * mintemp / r);
        maxtemp = floor (1.0 *maxtemp / r);

      //  cout << mintemp << " " << maxtemp << endl;

        if (phi < mintemp || phi > maxtemp) {
            puts("no");
            continue;
        }


        puts("yes");

    }


}
