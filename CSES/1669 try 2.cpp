#include<bits/stdc++.h>
using namespace std;

const int N = 100005;
vector<int> adj[N], vi;
bool vis[N];
stack<int> st;

void dfs(int v, int src)
{
    vis[v] = 1;
    st.push(v);

    for (auto u : adj[v]){
        if (vi.size()) return ;
        if (!vis[u]){
            dfs(u, v);
        }
        else if (vis[u] && src != u){
            vi.push_back(u);
            while (st.top() != u){
                vi.push_back(st.top());
                st.pop();
            }
            vi.push_back(u);
            break;
        }
    }

    if (vi.size()) return ;

    st.pop();
    return ;
}

int main()
{
    int i, j, n, m, a, b;
    scanf("%d %d", &n, &m);

    for (i = 0; i < m; i++){
        scanf("%d %d", &a, &b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (i = 1; i <= n && !vi.size(); i++){
        if (vis[i] == 0)
            dfs(i, 0);
    }

    if (!vi.size())
        puts("IMPOSSIBLE");
    else {
        printf("%d\n", vi.size());
        for (auto it: vi) printf("%d ", it);
        puts("");
    }

}
