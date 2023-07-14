#include<bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string adj[1001];
bool vis[1001][1001];
string ans;
int n, m;
long long sz = 0,  mx;

bool valid(int i, int j){
    if (i < n && j < m && i >=0 && j >= 0 && adj[i][j] != '#' && !vis[i][j])
        return true;
    return false;
}



bool bfs(int i, int j){

    queue <pair<int, int>> q;
    queue <string> str;
    ans = "";
    str.push(ans);
    q.push({i, j});
    vis[i][j] = 1;

    while(!q.empty()){

    i = q.front().first;
    j = q.front().second;
    ans = str.front();
    str.pop();
    q.pop();
    int n = ans.size();
    sz -= n;
    mx = max(sz, mx);
    //cout << i << " " << j << " " << sz <<endl;

//    if (adj[i][j] == 'B'){
//        return true;
//    }

    if (valid(i+1, j)){
        if (adj[i+1][j] == 'B'){
            ans += 'D';
            return true;
        }
        str.push( ans + 'D' );
        vis[i+1][j] = 1;
        q.push({i+1, j});

        sz += n+1;
    }
    if (valid(i-1, j)){
        if (adj[i-1][j] == 'B'){
            ans += 'U';
            return true;
        }
        str.push(ans + 'U');
        vis[i-1][j] = 1;
        q.push({i-1, j});

        sz += n+1;
    }
    if (valid(i, j+1)){
        if (adj[i][j+1] == 'B'){
            ans += 'R';
            return true;
        }
        str.push(ans + 'R');
        vis[i][j+1] = 1;
        q.push({i, j+1});

        sz += n+1;
    }
    if (valid(i, j-1)){
        if (adj[i][j-1] == 'B'){
            ans += 'L';
            return true;
        }
        str.push(ans + 'L');
        vis[i][j-1] = 1;
        q.push({i, j-1});

        sz += n+1;
    }

    }

    return false;
}

int main()
{
    ios
    int i, j, sti, stj;
    cin >> n >> m;
    cin.ignore();
    for (i = 0; i < n; i++){
            cin >> adj[i];
        for (j = 0; j < m; j++){
            char ch = adj[i][j];
            if (ch == 'A') sti = i, stj = j;
        }
    }

    cout << mx << endl;

   bool found =  bfs (sti, stj);

    if (found){
        cout << "YES" << endl << ans.size() << endl << ans << endl;
    }
    else
        cout << "NO" << endl;

}
