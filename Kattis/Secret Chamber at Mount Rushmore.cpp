#include<bits/stdc++.h>
#define pb push_back
#define endl "\n"
using namespace std;


vector <int> adj[26], vis(26);
bool check[26][26];

void dfs (int ind, int u) {
    check[ind][u] = true;
    vis[u] = true;

    for (auto it: adj[u]) {
        if (!vis[it])
            dfs(ind, it);
    }

    return ;
}

void solve (string s1, string s2) {
    if (s1.size() != s2.size()){
        cout << "no" << endl;
        return ;
    }

    for (int j = 0; j < s1.size(); j++) {
        if (check[s1[j]-'a'][s2[j]-'a'] == false) {
            cout << "no" << endl;
            return ;
        }
    }

    cout << "yes" << endl;
    return ;
}

int main()
{
    int n, m;
    cin >> n >> m;

    cin.ignore();

    for (int i = 0; i < n; i++) {
        char a, b;
        cin >> a >> b;
        adj[a-'a'].pb(b-'a');
    }

    for (int i = 0; i < 26; i++) {
        dfs(i, i);
        for (auto &it: vis)
            it = false;
    }

    for (int i = 0; i < m; i++) {
        string s1, s2;
        cin >> s1 >> s2;

        solve (s1, s2);

    }
}
