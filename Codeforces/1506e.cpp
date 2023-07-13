#include<bits/stdc++.h>
using namespace std;
const int N = 2*1e5 + 5;
int ar[N];


void find_min(int n)
{
    int i, j = 1, ans[n];
    bool bl[n+1] = {};

    for (i = 0; i < n ; i++)
        bl[ar[i]] = true;

    ans[0] = ar[0];
    for (i = 1; i < n; i++){

        if (ar[i] != ar[i-1]){
            ans[i] = ar[i];
            continue;
        }

        while (bl[j]) j++;

        ans[i] = j;
        bl[j] = true;
    }

    for (auto it: ans) cout << it << " ";
    cout << endl;

}

void find_max(int n)
{
    int i, j, ans[n];
    bool bl[n+1] = {};
    set<int> st;

    for (i = 0; i < n; i++)
        bl[ar[i]] = true;

    for (i = 1; i <= n; i++)
        if (!bl[i]) st.insert(i);

    ans[0] = ar[0];
    for (i = 1; i < n; i++){

        if(ar[i] != ar[i-1]){
            ans[i] = ar[i];
            continue;
        }

        auto it = st.lower_bound(ar[i]);
        it--;

        ans[i] = *it;
        st.erase(it);
    }

    for (auto it: ans) cout << it << " ";
    cout << "\n";

}

void solve()
{
    int i, j, n;
    cin >> n;
    for (i = 0; i < n; i++){
        cin >> ar[i];
    }

    find_min(n);

    find_max(n);

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
