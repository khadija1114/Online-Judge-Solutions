#include<bits/stdc++.h>
using namespace std;

int main()
{
    int e = 0, m = 0, l = 0, n;
    cin >> n;
    cin.ignore();
    string  s;
    while (n--){
        getline(cin,s);
        if (s[0] == 'E') e++;
        else if (s[0] == 'M') m++;
        else l++;
    }

    if (e > m && e > l) cout << "Emperor Penguin";
    else if(m > e && m > l) cout << "Macaroni Penguin";
    else cout << "Little Penguin";

    cout << "\n";
}
