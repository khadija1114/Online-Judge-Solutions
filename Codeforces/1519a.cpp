#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, d, ans;

    cin >> t;

    while(t--){
        cin >> a >> b >> d;
        d++;

        if(a > b) swap(a, b);

        ans = ceil(b*1.0 / d);

        if (a >= ans) cout << "YES" ;
        else cout <<"NO";
        cout << "\n";
    }

}
