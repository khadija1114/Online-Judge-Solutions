#include<bits/stdc++.h>
using namespace std;

const int maxN = 2505;
int par[maxN];

class edge {
public:
    int a, b, w;
    edge () {}
    edge (int x, int y, int z) {
        a = x;
        b = y;
        w = z;
    }
};

vector <edge> edges;

int bellmanFord(int n)
{
    vector<long long> distance(n+1, 100000000000009);
    distance[1] = 0;
    par[1] = 1;


    for (int i = 0; i < n-1; i++) {
        for (auto it : edges) {
            //cout << it.a << " " << it.b << " " << distance[it.b] << endl;
            if (distance[it.b] > distance[it.a] + it.w) {
                par[it.b] = it.a;
                distance[it.b] = distance[it.a] + it.w;
            //    cout << " " << it.a << " " << it.b << " " << distance[it.b] << endl;
            }
        }
    }


    for (auto it : edges) {
        if (distance[it.b] > distance[it.a] + it.w) {
            par[it.b] = it.a;
           // cout << it.a << " " << it.b << endl;
            return it.b;
        }
    }
   // cout << endl;

    return 0;
}

vector <int> getCycle (int node,int n)
{
    vector <int> ans;

    for (int i = 0; i < n; i++) node = par[node];


   // cout << node << " " << par[node] << endl;
   // return ans;

    ans.push_back(node);
    for (int i = par[node]; i != node; i = par[i]) {
        ans.push_back(i);
      //  cout << i << " ";
    }
    ans.push_back(node);

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        edges.push_back(edge(a, b, c));
    }

    int node = bellmanFord(n);
    if (node) {
        puts("YES");

        vector <int> cycle = getCycle(node, n);
        for (auto it : cycle)
            cout << it << " ";
        cout << endl;
    }
    else {
        puts("NO");
    }
}
