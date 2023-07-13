#include<bits/stdc++.h>
using namespace std;
bool have_problem[17][17];

bool canTake(vector<int> &temp) {
    for (int i = 0; i < temp.size()-1; i++) {
        for (int j = i+1; j < temp.size(); j++) {
            if (have_problem[temp[i]][temp[j]])
                return false;
        }
    }

    return true;
}

int main()
{
    map<string , int> mp;
    map<int, string> invmp;


    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mp[s] = i+1;
        invmp[i+1] = s;
    }

    for (int i = 0; i < m; i++) {
        string s, t;
        cin >> s >> t;
        int u = mp[s];
        int v = mp[t];

        have_problem[u][v] = true;
        have_problem[v][u] = true;
    }

    vector<int> ans;
    for (int i = 1; i < (1<<n); i++) {
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            if (i&(1<<j)) {
                temp.push_back(j+1);
            }
        }

        if (canTake(temp) && temp.size() > ans.size()) {
            ans = temp;
        //    cout <<"can take " <<  i << endl;
        }
    }

    cout << ans.size() << endl;
    vector <string> name;
    for (auto it: ans)
        name.push_back(invmp[it]);

    sort(name.begin(), name.end());
    for (auto it: name)
        cout << it << endl;


}
