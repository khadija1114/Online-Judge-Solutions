#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define endl "\n"
#define w(t) cin>>t;while(t--)
using namespace std;
int cs = 0;

void solve()
{
    double ab, ac, bc, rat, ans;

    cin >> ab >> ac >> bc >> rat;
    ans = ab * sqrt(rat / (rat+1));

    printf("Case %d: %0.8lf\n", ++cs, ans);

    return ;
}

int main()
{
    int t;
    w(t)
    {
        solve();
    }
}



