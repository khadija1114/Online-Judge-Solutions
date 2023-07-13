#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long sum;
    scanf("%d %lld" ,&n, &sum);
    vector<int> v(n);
    for (auto &it: v) scanf("%d", &it);

    long long temp = 0;
    int seg = 1e6;
    for (int i = 0, j = 0; i < n; i++) {
        while (j < n && temp < sum){
            temp += v[j++];
        }

        if (temp >= sum)
            seg = min(seg, j-i);

        temp -= v[i];
        j = max(j, i);

    }
    if (seg == 1e6) seg = -1;
    printf("%d\n", seg);
}

