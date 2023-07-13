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
    int seg = 0;
    for (int i = 0, j = 0; j < n; i++) {
        while (j < n && temp + v[j] <= sum) {
            temp += v[j++];
        }
        seg = max(seg, j-i);

        temp -= v[i];
        j = max(j, i);
        //cout << i << " " << j << endl;
    }

    printf("%d\n", seg);
}

