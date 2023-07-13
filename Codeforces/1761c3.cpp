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

void dfs(int child)
{
   // cout << "in dfs " << child << endl << "child ";
//    for (auto it: ans[child])
//        cout << " " << it;
//    cout << endl << endl;
   // vis[par] = true;

    for (int i = 0, j = 0; i < adj[child].size(); i++) {
        int par = adj[child][i];
      //  cout << "par " << par << endl;
        for (auto it: ans[child]){
            if (!mat[par][it]) {
                mat[par][it] = 1;
                ans[par].push_back(it);
          //      cout << it << " ";
            }
        }
        int dif = 0;
        for (int l = 0; l < 101; l++) {
            if (mat[par][l] != mat[child][l])
                dif++;
        }
        if (!dif) {
            int it = 0;
            while (mat[par][it] == 1)
                it++;
            mat[par][it] = 1;
            ans[par].push_back(it);
          //  cout << it << " ";
        }

        dfs(par);
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
                    adj[i].push_back(j);

                }

            }
        }

//        vector <pair<int, int>> order;
//        for (int i = 0; i < n; i++)
//        order.push_back({indegree[i], i});
//
//        sort(order.rbegin(), order.rend());

        for (int i = 0, j = 0; i < n; i++, j = 0) {
            if (outdegree[i] == 0) {
                for (auto it: adj[i]) {
                    while (mat[it][j])
                        j++;
                }
                int node = i;
                mat[node][j] = 1;
                ans[node].push_back(j);
                dfs(node);
              //  cout << node << " " << j << endl;
            }
        }


        for (int i = 0; i < n; i++) {
            cout << ans[i].size() << " ";
            for (auto it: ans[i]) cout << it+1 << " ";
            cout << endl;
        }
    }
}



