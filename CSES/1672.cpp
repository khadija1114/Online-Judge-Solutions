#include<bits/stdc++.h>
#define pb push_back
using namespace std;

const int N = 505;
long long dis[N][N], inf = 1e18;

int main()
{
    int n, m, q, i, j, k, a, b;
    long long c;
    cin >> n >> m >> q;

    for (i = 0; i <= n; i++){
        for (j = 0; j <= n; j++){
            if (i == j) continue;
            dis[i][j] = inf;
        }
    }

    for (i = 0; i < m; i++){
        cin >> a >> b >> c;
        dis[a][b] = min (dis[a][b], c);
        dis[b][a] = min (dis[b][a], c);
    }

    for (k = 1; k <= n; k++){
        for (i = 1; i <= n; i++){
            for (j = 1; j <= n; j++)
                dis[i][j] = min (dis[i][j] , dis[i][k] + dis[k][j]);
        }
    }

    while (q--){
        cin >> a >> b;
        if (dis[a][b] == inf) {
            cout << -1;
        }
        else
            cout << dis[a][b];

        cout << "\n";
    }
}
