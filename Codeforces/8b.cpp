#include<bits/stdc++.h>
using namespace std;
map<pair<int, int>, bool> vis;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
//         u, d, r, l

unordered_map<char, pair<int, int>> direction;

bool visAnyAdjNode(int x, int y)
{
    //cout << " " << x << " " << y << endl;
    int adj = 0; // adj vis node
    for (int i = 0; i < 4; i++) {
        int tx = x+dx[i];
        int ty = y+dy[i];
        if (vis[{tx, ty}]) {
          //  cout << "    " << tx << " " << ty << endl;
            adj++;
        }
    }

    if (adj > 1)
        return 1;

    return 0;
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();

    direction['U'] = {0, 1};
    direction['D'] = {0, -1};
    direction['R'] = {1, 0};
    direction['L'] = {-1, 0};
    int pointx = 0, pointy = 0;
    vis[{pointx, pointy}] = true;

    for (auto it: s) {
        int newx = direction[it].first + pointx;
        int newy = direction[it].second + pointy;

       // cout << newx << " " << newy << endl;

        if (vis[{newx, newy}] || visAnyAdjNode(newx, newy)) {
            puts("BUG");
            return 0;
        }

     //   cout << newx << " " << newy << endl;

        vis[{newx, newy}] = 1;
        pointx = newx;
        pointy = newy;
    }

    puts("OK");

}


