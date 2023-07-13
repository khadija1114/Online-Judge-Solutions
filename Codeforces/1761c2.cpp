#include<bits/stdc++.h>
using namespace std;
vector <int> outdegree(105), indegree(105), ans[105], adj[105];
bool mat[105][105], vis[105];


void Clear(int n)
{
    for (int i = 0; i < n; i++) {
        indegree[i] = 0;
        outdegree[i] = 0;
        ans[i].clear();
        adj[i].clear();
        for (int j = 0; j < n; j++)
            mat[i][j] = 0;
            vis[i] = 0;
    }
}

void dfs(int par)
{
   // cout << "in dfs " << par << endl << endl;
    vis[par] = true;

    for (int i = 0, j = 0; i < adj[par].size(); i++) {
        int child = adj[par][i];

      //  cout << "child " << child << endl;

        if (!vis[child]) {
           // cout << "  ";
            for (int k = 0; k < ans[par].size(); k++)
                if (k != j) {
                    ans[child].push_back(ans[par][k]);
              //      cout << ans[par][k] << " ";
                }

            j++;
            dfs(child);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Clear(n+3);

        int a;
        string s;
        for (int i = 0; i < n; i++) {
            cin >> s;
            for (int j = 0; j < n; j++) {
                a = s[j]-'0';
                if (a) {
                    outdegree[j]++, indegree[i]++;
                 //  cout << i << " ";
                    adj[j].push_back(i);

                }

            }
        }

        vector <pair<int, int>> order;
        for (int i = 0; i < n; i++)
        order.push_back({outdegree[i], i});

        sort(order.begin(), order.end());
        int i = 0;
        vector <int> zero;
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0)
                zero.push_back(i);
        }

        for (int i = 0, j = 0; i < n; i++) {
            mat[zero[j]][i] = 1;
            ans[zero[j]].push_back(i);
            j++;
            j %= zero.size();
        }

        for (auto it: zero)
            dfs(it);


        for (int i = 0; i < n; i++) {
            cout << ans[i].size() << " ";
            for (auto it: ans[i]) cout << it+1 << " ";
            cout << endl;
        }
    }
}


