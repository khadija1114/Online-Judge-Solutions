#include<bits/stdc++.h>
using namespace std;
double pi = 2*acos(0);
string s;

int solve()
{
    string temp;
    cin >> temp;

    int ans = 0;
    for (int i = 0; i < temp.size(); i++)
        if (s[i] != temp[i])
            return i;

    return temp.size();
}

int main()
{
    s = "314159265358979323846264338327";
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;

}
