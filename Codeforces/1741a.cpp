#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string a, b;
        cin >> a >> b;
        if (a == b) {
            puts("=");
            continue;
        }

        if (a == "M") {
            if (b[b.size()-1] == 'S')
                puts(">");
            else
                puts("<");
            continue;
        }

        if (a[a.size()-1] == b[b.size()-1]) {
            if (a[a.size()- 1] == 'S')
                if (a.size() > b.size())
                    puts("<");
                else puts(">");
            else
                if (a.size() > b.size())
                    puts(">");
                else puts("<");
            continue;
        }
        if (a[a.size()-1] == 'S' && b[b.size()-1] != 'S') {
            puts("<");
            continue;
        }
        if (a[a.size()-1] == 'L' && b[b.size()-1] != 'L') {
            puts(">");
            continue;
        }

    }
}
