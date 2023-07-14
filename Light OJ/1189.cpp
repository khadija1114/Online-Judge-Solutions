#include<bits/stdc++.h>
using namespace std;

long long mx = 1e18;
const int N = 1e5;

int main()
{
    int i, j, t, cs = 0;
    long long fact[25];
    fact[0] = 1;

    for (i = 1; fact[i-1] <= mx; i++){
        fact[i] = fact[i-1] * i;
//        cout << i << " " << fact[i]<< endl;
    }


    scanf("%d", &t);
    while (t--){
        long long n;
        scanf("%lld", &n);
        vector<int> ans;
        for (j = i-1; j >= 0 && n; j--){
            if (n >= fact[j]){
                n -= fact[j];
                ans.push_back(j);
            }

        }

//        cout << n << endl;
//        for (auto it: ans) cout << it << " "<< fact[it] << endl;

        printf("Case %d: ", ++cs);
        if (n)
            printf("impossible");
        else
            for (j = ans.size()-1; j >=0; j--){
                printf("%d!", ans[j]);
                cout << "+" [j==0];
            }
        printf("\n");
    }
}
