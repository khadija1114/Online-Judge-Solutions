#include<bits/stdc++.h>
using namespace std;
int to[26], sz[26], from[26], par[26];

void Clear()
{
    for (int i = 0; i < 26; i++) {
        to[i] = i;
        sz[i] = 1;
        from[i] = i;
        par[i] = i;
    }
}

int findPar(int a)
{
    if(par[a] == a) return a;
    return par[a] = findPar(par[a]);
}

void add(int a, int b)
{
    a = findPar(a);
    b = findPar(b);

    if (a == b) return ;

    if (sz[a] < sz[b]) swap(a, b);

    par[b] = a;
    sz[a] += sz[b];
}

void solve()
{
    Clear();

    int n;
    string s;
    cin >> n >> s;

    for (auto &it: s) {
        int c = it-'a';
        if (to[c] != c){
            it = to[c]+'a';
            continue;
        }
        //cout << it ;

        for (int i = 0; i < 26; i++) {
           // cout << i << " ";
            if (from[i] != i) continue;
            if (findPar(c) == findPar(i) && sz[par[c]] != 26) continue;
           // cout << i << endl;
            it = i+'a';
            to[c] = i;
            from[i] = c;
            add(i, c);
            break;
        }
      //  cout << " " << it << endl;
    }

    cout << s << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

