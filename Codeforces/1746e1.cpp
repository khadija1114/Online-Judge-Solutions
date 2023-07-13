#include<bits/stdc++.h>
using namespace std;

void countAns(int l, int r, int &yes, int &no)
{
    cout << "?" << " ";
    cout << r-l+1 << " ";
    for (int i = l; i <= r; i++)
        cout << i << " ";
    cout << endl;
    cout.flush();

    string s;
    cin >> s;

    if (s == "YES") yes++;
    else no++;
}

bool ask(int l, int r)
{
    int yes = 0, no = 0;

    for (int i = 0; i < 3; i++)
        countAns(l, r, yes, no);

    return yes>no;
}

int main()
{
    int n;
    cin >> n;

    int l = 1, r = n, mid;

    while (l < r) {
        mid = l + (r-l)/2;

        if (ask(l, mid))
            r = mid;
        else
            l = mid+1;
    }

    cout << "!" << " " <<  l << endl;
    cout.flush();

    string s;
    cin >> s;
    //if (s == ":)")
        return 0;

}


