#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int x, y;
    node(){}
    node(int a, int b)
    {
        x = a; y = b;
    }

    bool operator<(const node& other){
        return y > other.y;
    }
};

int main()
{
    int i, n, a, b;
    vector <node> v;
    cin >> n;
    for (i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back(node(a, b));
    }
    sort (v.begin(), v.end());

    for (auto it: v){
        cout << it.x << " " << it.y << "\n";
    }
}
