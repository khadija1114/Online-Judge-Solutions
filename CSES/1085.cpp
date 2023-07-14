/// using binary search
#include<bits/stdc++.h>
using namespace std;

bool possible (vector<int> v, long long cnt, long long k)
{
    long long tcnt = 0, tk = 1;

    for (auto it : v){
        if (it > cnt) return false;

        if (it + tcnt > cnt){
            tk++;
            tcnt = it;
        }
        else
            tcnt += it;
    }

    if (tk <= k) return true;
    return false;

}

int main()
{
    long long n, k, l = 0, r = 0, mid, ans;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &it: v) cin >> it;
    for (auto it: v) r += it;

    while (l <= r){

        mid = (l+r)/2;

        if (possible(v, mid, k)){
            ans = mid;
            r = mid-1;
        }

        else
            l = mid+1;

    }

    cout << ans << "\n";
}
