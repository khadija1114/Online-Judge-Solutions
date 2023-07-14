#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+2;
double lg[N];

int main()
{
    long long ans;
    int t, cs = 0, n, m;

    for (int i = 1; i < N-1; i++){
        lg[i] = lg[i-1] + log(i);
    }

    scanf("%d", &t);

    while (t--){
        scanf("%d %d", &n, &m);
        ans = lg[n]/log(m) + 1;
        printf("Case %d: %lld\n", ++cs, ans);
    }
}
