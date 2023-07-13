#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;


int main()
{
   int t;
   cin >> t;
   while (t--) {
        int n, m;
        cin >> n >> m;
        int ar[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> ar[i][j];
        }

        int l = 1, r = min(n, m), mid;
        while (l < r) {
            mid = l + (r-l+1)/2;

            bool possible = false;
            bool found = false;
            int nextj = 0;

            for (int i = 0; i < n && !found; i++){
                for (int j = 0; j < m && !found; j = nextj+1) {
                    nextj = j+1;
                    if (i+mid-1 < n && j+mid-1 < m) {
                        found = true;
                        for (int x = i; x < i+mid && found; x++){
                            for (int y = j; y < j+mid && found; y++)
                                if (ar[x][y]<mid)
                                {
                                    found = false;
                                    nextj = y;
                                }
                        }

//                        if (found)
//                            cout << i << " " << j << " " << mid << endl;

                    }

                }
            }

            if (found)
                l = mid;
            else
                 r = mid-1;

        }

        cout << l << endl;
   }

}
