///using meet in the middle with all possible subset

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, t, x, y, z;
    string s;
    cin >> t;
    while (t--){
        cin >> x >> y >> z >> n;
        int ar[n/2 +1][3], br[n/2+1][3], r1 = n/2, r2;
        r2 = n-r1;

        for (i = 0; i < r1; i++){
            cin >> s >>  ar[i][0] >> ar[i][1] >> ar[i][2];
        }
        for (i = 0; i < r2; i++){
            cin >> s >> br[i][0] >> br[i][1] >> br[i][2];
        }

        bool ans = false;
        set< tuple<int, int, int> > st1, st2;

        for (int mask = 0; !ans && mask < (1 << r1); mask++){

            vector<int> pos;
            tuple<int, int, int> sum;
            int a = 0, b = 0,  c = 0;

            for (i = 0; i < r1; i++){
                if (mask & (1<<i)){
                    a += ar[i][0], b += ar[i][1], c +=  ar[i][2];
                }
            }

            if (a == x && b == y && c == z){
                ans = true;
            }
            else if (a <= x && b <= y && c <= z){
                st1.insert(make_tuple(a, b, c));
            }
        }

        for (int mask = 0; !ans && mask < (1 << r2); mask++){

            vector<int> pos;
            tuple<int, int, int> sum;
            int a = 0, b = 0,  c = 0;

            for (i = 0; i < r2; i++){
                if (mask & (1<<i)){
                    a += br[i][0], b += br[i][1], c +=  br[i][2];
                }
            }

            if (a == x && b == y && c == z){
                ans = true;
            }
            else if (a <= x && b <= y && c <= z){
                st2.insert(make_tuple(a, b, c));
            }
        }


        if (!ans){

            int a, b, c;

            r1 = st1.size(), r2 = st2.size();

            for (auto it: st1){

                a = x - get<0> (it), b = y - get<1> (it) , c = z - get<2> (it);

                if (st2.find(make_tuple(a, b, c)) != st2.end()){
                    ans = true;
                    break;
                }
            }

        }

        if (ans){
            cout << "POSSIBLE" << "\n";
        }
        else {
            cout << "IMPOSSIBLE" << "\n";
        }

    }
}
