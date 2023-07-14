#include<bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 1002;

char adj[N][N];
bool vis[N][N];
string ans;
int n, m, path[N][N];

bool valid(int i, int j){
    if (i < n && j < m && i >=0 && j >= 0 && adj[i][j] != '#' && !vis[i][j])
        return true;
    return false;
}

int main()
{
    ios
    int i, j, sti, stj;
    queue<pair<int,int>> q;
    cin >> n >> m;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cin >> adj[i][j];
            if (adj[i][j] == 'M') q.push({i, j}), vis[i][j] = 1;
            else if (adj[i][j] == 'A') sti = i, stj = j;
        }
    }

    while(!q.empty()){
        i = q.front().first;
        j = q.front().second;
        q.pop();

        if (valid(i+1, j)){
            vis[i+1][j] = 1;
            path[i+1][j] = path[i][j]+1;
            q.push({i+1, j});
        }
        if (valid(i-1, j)){
            vis[i-1][j] = 1;
            path[i-1][j] = path[i][j]+1;
            q.push({i-1, j});
        }
        if (valid(i, j+1)){
            vis[i][j+1] = 1;
            path[i][j+1] = path[i][j]+1;
            q.push({i, j+1});
        }
        if (valid(i, j-1)){
            vis[i][j-1] = 1;
            path[i][j-1] = path[i][j]+1;
            q.push({i, j-1});
        }
    }



}
