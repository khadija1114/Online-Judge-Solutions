#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y; cin >> x >> y;

    long long temp = 4*y-x*x;
    if (temp < 0) {
        puts("NO");
        return ;
    }

    long long sq = sqrt(temp);
    if (sq*sq != temp) {
        puts("NO");
        return ;
    }

    sq *= x;
    if (sq != 2*y){
        puts("NO");
        return ;
    }

    puts("YES");

}

int main()
{
    int t; cin >> t;
    while (t--)
        solve();
}
