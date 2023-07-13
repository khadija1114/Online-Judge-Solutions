#include<bits/stdc++.h>
using namespace std;

void solve ()
{
    int i, n, ar[101] = {}, a;
    cin >> n;
    for (i = 0; i < n; i++){
        cin >> a;
        ar[a]++;
    }

    for (i = 0; i < 101; i++){
        if (ar[i]){
            cout << i << " ";
            ar[i]--;
        }
    }
    for (i = 0; i < 101; i++){
        while (ar[i]){
            cout << i << " ";
            ar[i]--;
        }
    }

    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        solve ();
    }

}
