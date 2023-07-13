#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
        cin >> n >> m;
        vector <vector<int>> add, sub, every;
        int one = 0;

        for (int i = 0; i < n; i++) {
            vector<int> temp(m);
            int tone = 0;
            for (auto &it: temp) {
                cin >> it;
                one += it;
                tone += it;
            }

            temp.push_back(tone); // every[i][m]
          //  temp.push_back(i); // every[i][m+1]
            every.push_back(temp);
        }

        if (one % n) {
            puts("-1");
            return ;
        }

        one /= n;
        vector<int> take, receive;

        for (int i = 0; i < n; i++) {
            int tone = every[i][m];
            if (tone > one) {
                every[i][m] -= one;
                sub.push_back(every[i]);
                take.push_back(i);
            }
            else if (tone < one) {
                add.push_back(every[i]);
                receive.push_back(i);
            }
        }

        int take_ind = -1, j = 0;
        vector <vector<int>> ans;
        for (auto index: receive) {
            int to_be_received = one-every[index][m];

            while (to_be_received) {

                for (int i = 0, k = 0; i < to_be_received; ) {
                        if(every[index][k] == 1) {
                            i++, k++;
                            continue;
                        }
                        for (int j = 0; j < n; j++){
                                if ()
                            if (every[index][k] == 0 && every[take_ind][k] == 1) {
                                vector <int> v = {index, take_ind, k};
                                ans.push_back(v);
                             //   cout << index+1 << " " << take_ind+1 << " " << k+1 << endl;
                                break;
                            }
                    }
                }

                if (to_be_received <= every[take_ind][m])
                    every[take_ind][m] -= to_be_received, to_be_received = 0;
                else
                    to_be_received -= every[take_ind][m];

            }

        }

        cout << ans.size() << endl;
        for (auto v: ans){
            for (auto it: v)
                cout << it+1 << " ";
            cout << endl;
        }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


