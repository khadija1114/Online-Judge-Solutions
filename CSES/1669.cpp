#include<bits/stdc++.h>
#define pb push_back
using namespace std;

const int N = 1e5+2;
vector<int> adj[N], vi;
int vis[N];
bool ans;
stack<int> st;

void dfs(int v, int src)
{
    vis[v] = 1;
    st.push(v);
//    cout << v << endl;

    for (auto u : adj[v]){
//        cout << v << " " << u << " " << vis[u] <<  endl;
        if (ans) return ;
        if (vis[u] == 0){
//            cout << "now" << endl;
            dfs(u, v);
        }
        else if (vis[u] == 1 && src != u){
            vi.push_back(u);
            while (st.top() != u){
                vi.push_back(st.top());
                st.pop();
            }
            vi.push_back(u);
            ans = true;
            break;
        }
    }

    vis[v] = 2;
//    cout << "stack top = " << st.top() << endl;
    st.pop();
    return ;
}

int main()
{
    int i, j, n, m, a, b;
    cin >> n >> m;

    for (i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    for (i = 1; i <= n && !ans; i++){
        if (vis[i] == 0)
            dfs(i, 0);
    }

    if (!ans)
        cout << "IMPOSSIBLE" << "\n";
    else {
        cout << vi.size() << "\n";
        for (auto it: vi) cout << it << " ";
    cout << "\n";
    }



}

