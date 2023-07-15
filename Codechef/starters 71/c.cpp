#include <bits/stdc++.h>
using namespace std;

int mod = 1e9+7;
int base = 129;
const int maxN = 1e4+2;
long long pw[maxN];



void generatePw()
{
    pw[0] = 1;
    for (int i = 1; i < maxN; i++)
        pw[i] = (pw[i-1]*base) % mod;
}

vector<long long> calculateHash(string s)
{
    vector<long long> h(s.size());
    h[0] = s[0];
    for (int i = 1; i < s.size(); i++) {
        h[i] = (h[i-1]*base + s[i]) % mod;
    }

    return h;
}

int calculateRangeHash(int l, int r, vector<long long> &hashVector)
{
    if (l == 0) return hashVector[r];
    int ans = hashVector[r] - (hashVector[l-1]*pw[r-l+1])%mod;
    return (ans+mod) % mod;
}



bool found (int mid, vector<long long> &hashS, vector<long long> &hashR)
{
    unordered_map<long long, int> mp;

    for (int i = 0; i+mid-1 < hashS.size(); i++){
        long long rangeH = calculateRangeHash(i, i+mid-1, hashS);
        if (!mp[rangeH]) {
            mp[rangeH] = i+1;
        }
    }

    for (int i = 0; i+mid-1 < hashS.size(); i++) {
        long long rangeH = calculateRangeHash(i, i+mid-1, hashR);
        if (mp[rangeH]) {
            int st1 = mp[rangeH]; int en1 = st1+mid-1;
            int st2 = hashS.size()-i; int en2 = st2-mid+1;
            //swap(st2, en2);
           // cout << st1 << " " << en1 << " " << st2 << " " << en2 <<endl;
            if ((st2 >= st1 && st2 <= en1) || (en2 >= st1 && en2 <= en1)) ;
            else return true;
        }
    }

    return false;
}

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    string rs = s;
    reverse(rs.begin(), rs.end());

    vector<long long> hashS = calculateHash(s);
    vector<long long> hashR = calculateHash(rs);

    int l = 0, r = n, mid;
    while (l < r) {
        mid = l+(r-l+1)/2;
     //   cout << mid << endl;

        if (found(mid, hashS, hashR))
            l = mid;
        else
            r = mid-1;
    }

    cout << l << endl;
}


int main() {
	// your code goes here
	generatePw();
	int t;
	cin >> t;
	while (t--) {
	    solve();
	}
	return 0;
}


