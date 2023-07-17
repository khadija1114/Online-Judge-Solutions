#include<bits/stdc++.h>
using namespace std;

int func (int n)
{
    vector<int> v;
    int n1 = 0, n2 = 0, i = 0;

    for (i = 0; n ; i++){
        v.push_back(n % 10);
        n /= 10;
    }
    sort(v.begin(), v.end());

    for (auto it: v){
        n2 = n2 * 10 + it;
    }

    reverse(v.begin(), v.end());
    for(auto it: v){
        n1 = n1 * 10 + it;
    }

   // cout<< n1 << " " << n2 << endl;
    return n1-n2;
}

int main()
{
    int n, t;
    cin >> n >> t;

    while(t--){
        n = func(n);
    }
    cout<< n << "\n";
}

