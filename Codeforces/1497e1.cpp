#include<bits/stdc++.h>
using namespace std;

const int N = 1e4 + 1;
vector <int> prime;
bool mark[N+1];

void seive()
{
    prime.push_back(2);
    for (long long i = 3; i < N; i += 2){
        if (!mark[i]){
            prime.push_back(i);
            for (long long j = i*i; j < N; j += 2*i){
                mark[j] = false;
            }
        }
    }
}

int main()
{
    seive();
    int t, n, i, j, k;
    bool flag;
    cin >> t;
    while (t--){
        cin >> n >> k;
        int ar[n], ans = 1;
        flag = true;
        for (i = 0; i < n; i++){
            cin >> ar[i];
        }

        for (i = 0; i < n; i++){

            int a = 1, cntp = 0;

            for (auto it: prime){
                cntp = 0;
                if (it * it > ar[i])
                    break;

                while (ar[i] % it == 0){
                    cntp++;
                    ar[i] /= it;
                }

                if (cntp & 1)
                    a *= it;
            }

            if (ar[i] > 1){
                a *= ar[i];
            }

            ar[i] = a;
        }

 //      for (auto it: ar) cout << it << " ";


        map <int, int> mp;
        for (i = 0; i < n; i++){
            if (mp[ar[i]]){
                ans++;
                mp.clear();
            }

            mp[ar[i]]++;
        }

        cout << ans << "\n";

    }
}
