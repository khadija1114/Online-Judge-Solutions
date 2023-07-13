#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ans;
    cin >> n;
    vector<int> v;

    for (int i = 1; i <= (1<<n) ; i++)
        v.push_back(i);

    while (v.size() > 2) {

        vector <int> temp;

        for (int i = 0; i < v.size(); i += 4) {

            cout << "? " << v[i] << " " << v[i+2] << endl;
            cout.flush();

            int a;
            cin >> a;

            if (a == 0) {
                cout << "? " << v[i+1] << " " << v[i+3] << endl;
                cout.flush();

                int b;
                cin >> b;

                if (b == 1) temp.push_back(v[i+1]);
                else temp.push_back(v[i+3]);

            } else if (a == 1) {
                cout << "? " << v[i] << " " << v[i+3] << endl;
                cout.flush();

                int b;
                cin >> b;

                if (b == 1) temp.push_back(v[i]);
                else  temp.push_back(v[i+3]);

            } else {
                cout << "? " << v[i+2] << " " << v[i+1] << endl;
                cout.flush();

                int b;
                cin >> b;

                if (b == 1) temp.push_back(v[i+2]);
                else  temp.push_back(v[i+1]);

            }
        }

        v.resize(temp.size());
        v = temp;

//        for (auto it: v)
//            cout << it << " ";
//        cout << endl;

    }

    if (v.size() > 1) {
        cout << "? " << v[0] << " " << v[1] << endl;
        cout.flush();

        int b;
        cin >> b;

        if (b == 1) ans = v[0];
        else ans = v[1];

    } else {
        ans = v[0];
    }


    cout << "! " << ans << endl;
    cout.flush();
}


int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
