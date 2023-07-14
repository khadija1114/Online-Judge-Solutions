#include<bits/stdc++.h>
using namespace std;
const int maxN = 1000002;
const int mod = 1000000009;
const int base = 129;
long long pwr[maxN];
vector<long long> prefixHash(maxN);

void generatePrefixHash (string &s)
{
    prefixHash[0] = s[0];
    for (int i = 1; i < s.size(); i++) {
        prefixHash[i] = (prefixHash[i-1]*base + s[i]) % mod;
    }

}

long long getRangeHash (int l, int r)
{
    if (l == 0) return prefixHash[r];

    long long ans = ((prefixHash[r] - (prefixHash[l-1]*pwr[r-l+1])%mod)+mod)%mod;
    return ans;
}

void generateBorder(string &s)
{
    long long cnt = 0;

    for (int i = 0; i < s.size()-1; i++) {
        if (getRangeHash(0, i) == getRangeHash(s.size()-i-1, s.size()-1))
            printf("%d ", i+1);
    }
    puts("");
}

void calculatePower()
{
    pwr[0] = 1;
    for (int i = 1; i < maxN; i++)
        pwr[i] = (pwr[i-1]*base) % mod;
}

int main()
{
    calculatePower();
    char c1[maxN];
    string s;
    scanf("%s", c1);
    s = c1;
    generatePrefixHash(s);

    generateBorder(s);

}


