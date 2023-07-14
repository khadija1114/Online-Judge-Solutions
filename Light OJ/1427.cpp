#include<bits/stdc++.h>
using namespace std;
const int maxN = 1000002;
const int maxP = 502;
const int mod = 1e7+9;
const int base = 129;
long long pwr[maxP];
vector<long long> prefixHash(maxN);

void generatePrefixHash (string &s)
{
    prefixHash[0] = s[0];
    for (int i = 1; i < s.size(); i++) {
        prefixHash[i] = (prefixHash[i-1]*base + s[i]) % mod;
    }

}

long long hashValue(string &s)
{
    long long val = 0;
    for (int i = 0; i < s.size(); i++)
        val = (val * base + s[i]) % mod;

    return val;
}

long long getRangeHash (int l, int r)
{
    if (l == 0) return prefixHash[r];

    long long ans = ((prefixHash[r] - (prefixHash[l-1]*pwr[r-l+1])%mod)+mod)%mod;
    return ans;
}

long long calculateFrequency (string &p)
{
    long long hashP = hashValue(p);
    int m = p.size();
    long long cnt = 0;

    for (int i = 0; i+m <= prefixHash.size(); i++) {
        if (getRangeHash(i, i+m-1) == hashP)
            cnt++;
    }

    return cnt;
}

void calculatePower()
{
    pwr[0] = 1;
    for (int i = 1; i < maxP; i++)
        pwr[i] = (pwr[i-1]*base) % mod;
}

int main()
{
    calculatePower();
    int t, cs = 0;
    scanf("%d", &t);
    while (t--) {
        int n;
        string s, p;
        char c1[maxN], c2[maxP];
        scanf("%d", &n);
        scanf("%s", c1);
        s = c1;

        generatePrefixHash(s);

        printf("Case %d:\n", ++cs);
        while (n--) {
            scanf("%s", c2);
            p = c2;

            printf("%lld\n", calculateFrequency(p));
        }

    }
}
