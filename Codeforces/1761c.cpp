#include<bits/stdc++.h>
using namespace std;
vector <int> par(105), outdegree(105), indegree(105);

void Clear(int n)
{
    for (int i = 0; i < n; i++) {
        indegree[i] = 0;
        outdegree[i] = 0;
        par[i] = i;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        //shbr par shbi nije
        Clear(n+3);

        bool mat[n][n] = {}, used[n][n];
        int a;
        string s;
        for (int i = 0; i < n; i++) {
            cin >> s;
            for (int j = 0; j < n; j++) {
                a = s[j]-'0';
                if (a) {
                    par[i] = j, outdegree[j]++, indegree[i]++;
                 //   cout << i << " ";
                }

            }
        }

      //  cout << endl;

        vector <pair<int, int>> order;
        for (int i = 0; i < n; i++)
        order.push_back({indegree[i], i});

        sort(order.rbegin(), order.rend());
        for (auto it: order)
            cout << it.first << " " << it.second << endl;

        for (int i = 0; i < n; i++) {
            int child = order[i].second;
            int parent = par[child];
            int element = 0;

            while (mat[child][element] || used[parent][element]) {
              //  mat[child][element] = 1;
                used[parent][element] = 1;
                element++;
            }
            mat[child][element] = 1;
            mat[parent][element] = 1;
            cout << "here " << child << " " << parent << " " << element << endl;

            if (outdegree[parent] == 1)
                mat[parent][element+1] = 1;
        }

        vector <int> ans[n];

        for (int node = 0; node < n; node++) {
            for (int ele = 0; ele < n; ele++){
                if (mat[node][ele]) {
                    ans[node].push_back(ele+1);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i].size() << " ";
            for (auto it: ans[i]) cout << it << " ";
            cout << endl;
        }
    }
}

