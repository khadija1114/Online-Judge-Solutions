#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs = 0;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);

        vector <int> v(n);
        for (auto &it: v) scanf("%d", &it);

        if (n == 1) {
            puts("0");
            continue;
        }

      //  cout << "case " << ++cs << " ";

        printf("%d\n1 %d\n", n-1, n);
        if ( (v[0]+v[n-1]) & 1)
            v[n-1] = v[0];
        else
            v[0] = v[n-1];

        for (int i = 1; i < n-1; i++) {
            if ((v[0]+v[i]) & 1) {
                printf("1 %d\n", i+1);
              //  v[i] = v[0];
            }
            else {
                printf("%d %d\n", i+1, n);
              //  v[i] = v[n-1];
            }
        }

//        for (auto it: v) cout << it << " ";
//        puts("");
    }
}
