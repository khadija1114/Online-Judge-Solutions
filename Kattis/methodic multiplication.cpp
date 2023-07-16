#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.size(), n2 = s2.size();

    n1 /= 3;
    n2 /= 3;

    int n = n1*n2;

    for (int i = 0; i < n; i++)
        cout << "S(";
    cout << "0";
    for (int i = 0; i < n; i++)
        cout << ")";
}
