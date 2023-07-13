#include<bits/stdc++.h>
using namespace std;
const int mod = 998244353;

int solve()
{
    int n, m;
    cin >> n >> m;
    vector <int> v(n);
    for (auto &it: v) cin >> it;

    long long ans = 1;
    for (int i = 1; i < n; i++) {
        int d = v[i-1]/v[i];
        if (d*v[i] != v[i-1])
            return 0;

       // cout << "d is " << d << endl;
        long long here = m/v[i];
        int dd = d;

        //Done d er prime divisor lagbe,

        vector <int> primeDiv;
        for (int i = 2; i <= d/i; i++) {
            if (d%i == 0) {
                while (d%i == 0)
                    d/=i;
                primeDiv.push_back(i);
            }
        }

        if (d != 1)
            primeDiv.push_back(d);

        d = dd;


        //TODO inclusion exclusion ----- odd hole -, even hoile +

        int p = primeDiv.size();

     /*   cout << "Divisor : ";
        for (auto it: primeDiv)
            cout << it << " ";
        cout << endl; */

     //   cout << "First here value : " << here << endl;
        int it = i;

        for (int i = 1; i < (1<<p); i++) {
            int parity = 0;
            long long temp = 0;
         //   cout << i << endl;

            int div = v[it];
            for (int j = 0; j < p; j++) {
                if (i & (1<<j)) {
                    div *= primeDiv[j];
                    parity++;
                }
            }

            temp = m / div;
         //   cout << div << " ";

            if (parity & 1) {
                here -= temp;
            } else {
                here += temp;
            }

         //   cout << parity << " " << temp << endl;
        }

       // cout << "HERE value : " << here << endl;

        ans = (1LL * ans * here) % mod;
        v[i] = __gcd(v[i-1], v[i]);
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
       // cout << "ans is ---------------- " << solve() << endl;
       cout << solve() << endl;
}



