#include<bits/stdc++.h>
using namespace std;
const int maxN = 200002;
vector<int> adj[maxN], nodeWithDist(maxN);
bool vis[maxN];
int mxHeight = 0;

void dfs(int u, int d)
{
    vis[u] = true;
    nodeWithDist[d]++;
    mxHeight = max(mxHeight, d);
    for (auto it: adj[u]) {
        if (!vis[it])
            dfs(it, d+1);
    }
}

void Clear(int n)
{
    mxHeight = 0;
    for (int i = 0; i <= n; i++) {
        vis[i] = 0;
        adj[i].clear();
        nodeWithDist[i] = 0;
    }

}

bool isPossibletToHaveHeightMid(int h, int k)
{
    int divneeded = 0;
    for (int i = h+1; i <= mxHeight; i += h) {
        divneeded += nodeWithDist[i];
      //  cout << " " << i << " ";
    }

 //   cout << endl << "   " << divneeded << endl;

    return divneeded<=k;
}

void binarySearch(int n, int k)
{
    int l = 1, r = mxHeight, mid;
    while (l < r) {
        mid = l + (r-l)/2;
    //    cout << mid << endl;

        if (isPossibletToHaveHeightMid(mid, k))
            r = mid;
        else
            l = mid+1;
    }

    cout << l << "\n";
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {

        int n, k;
        scanf("%d %d", &n, &k);
        Clear(n);
        vector<int> par(n), dis(n);

        for (int i = 2; i <= n; i++) {
            int p;
            scanf("%d", &p);
            adj[p].push_back(i);
        }

        dfs(1, 0);
//        cout << "distance " ;
//        for (int i = 0; i <= mxHeight; i++)
//            cout << nodeWithDist[i] << "  ";
//        cout << endl;

        binarySearch(n, k);
    }
}
