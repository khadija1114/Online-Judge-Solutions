#include<bits/stdc++.h>
#define ff first
#define ss second
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

const pll mod = mp(1e9+7 , 1e9+9);
const ll base = 347;
const int N = 6e5+5;

ostream& operator<<(ostream& os, pll hash) {
    return os<<"("<<hash.ff<<", "<<hash.ss<<")";
}

pll operator+ (pll a, ll x) { return mp (a.ff+x , a.ss+x); }
pll operator- (pll a, ll x) { return mp (a.ff-x , a.ss-x); }
pll operator* (pll a, ll x) { return mp (a.ff*x , a.ss*x); }
pll operator+ (pll a, pll b) { return mp (a.ff+b.ff , a.ss+b.ss); }
pll operator- (pll a, pll b) { return mp (a.ff-b.ff , a.ss-b.ss); }
pll operator* (pll a, pll b) { return mp (a.ff*b.ff , a.ss*b.ss); }
pll operator% (pll a, pll m) { return mp (a.ff%m.ff , a.ss%m.ss); }


pll pb[N];

pll power (pll a, ll p)
{
    if (p == 0) return mp(1,1);

    pll ans = power (a , p/2);
    ans = (ans * ans) % mod;

    if (p&1) ans = (ans * a) % mod;

    return ans;
}

void prepow ()
{

    pb[0] = mp(1, 1);
    for (int i = 1; i < N-1; i++)
        pb[i] = (pb[i-1] * base) % mod;

}

pll Hash (string s)
{
    pll ans = mp(0, 0);
    int i, n = s.size();

    for (i = 0; i < n; i++)
        ans = (ans * base + s[i]) % mod;

//    cout << s <<endl;
//    cout << ans << endl;

    return ans;

}

pll replace(pll cur, int i, char a, char b)
{
    cur = (cur + pb[i] * (b-a)) % mod;
    cur = (cur+mod) % mod;
    return cur;
}


int main()
{
    prepow();
    int n, m, i, j, pos;
    string s;
    cin >> n >> m;
    set<pll> pre;

    cin.ignore();

    for (i = 0; i < n; i++){
        cin >> s;
        pre.insert(Hash(s));
    }


    for (i = 0; i < m; i++){

        cin >> s;

        bool ans = false;
        int sz = s.size();
        pll cnt = Hash(s);

        for (j = 0; j < sz && !ans ; j++){

            for (int k = 0; k < 3; k++){

                if (s[j] == 'a'+k) continue;
                pll temp = cnt;

                temp = replace (temp, sz-j-1, s[j], char('a'+k));

                if (pre.find(temp) != pre.end()){
                    ans = true;
                    break;
                }
            }

        }

        if (ans) cout << "YES";
        else cout << "NO";

        cout << "\n";


    }
}
