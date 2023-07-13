#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> par;

bool bfs(int src, int des)
{
    queue<int> q;
    q.push(src);

    while (!q.empty()) {
        long long v = q.front();
        q.pop();

        if (v*2 <= des && par[2*v] == 0) {
            par[2*v] = v;
            q.push(2*v);
        }
        if (2*v == des)
            return 1;

        if (10*v+1 <= des && par[10*v+1] == 0) {
            par[10*v+1] = v;
            q.push(10*v+1);
        }

        if (10*v+1 == des)
            return 1;
    }

    return 0;
}

void backtrack(int src, int des)
{
    vector<int> path;

    while (des != src) {
        path.push_back(des);
        des = par[des];
    }
    path.push_back(src);

    cout << path.size() << "\n";
    for(int i = path.size()-1; i >= 0; i--)
        cout << path[i] << " ";
    puts("");
}

int main()
{
    long long n, m;
    cin >> n >> m;

    if (bfs(n, m)) {
        puts("YES");
        backtrack(n, m);
    }
    else {
        puts("NO");
    }
}
